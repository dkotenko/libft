/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_buffer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:48:19 by clala             #+#    #+#             */
/*   Updated: 2020/02/20 18:58:17 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_buffer.h"

void		t_buffer_add_size(t_buffer *buf)
{
	char	*new;
	int		i;

	i = 0;
	new = ft_strnew(T_BUFFER_BUFF_SIZE + buf->size);
	while (buf->s[i])
	{
		new[i] = buf->s[i];
		i++;
	}
	buf->i = i;
	buf->size += T_BUFFER_BUFF_SIZE;
	free(buf->s);
	buf->s = new;
}

t_buffer		*t_buffer_create(int size)
{
	t_buffer	*buf;

	buf = (t_buffer *)malloc(sizeof(t_buffer));
	if (!(buf->s = ft_strnew(size)))
		return (NULL);
	buf->i = 0;
	buf->size = size;
	return (buf);
}

void		t_buffer_free(t_buffer **buf)
{
	free((*buf)->s);
	free(*buf);
}

int			t_buffer_write(t_buffer *buf, const char *str)
{
	int		i;
	int		len;

	len = ft_strlen(str);
	i = 0;
	if (str && str[i])
	{
		while (buf->i + len >= buf->size)
			t_buffer_add_size(buf);
		while (str[i] && i < len)
		{
			buf->s[buf->i++] = str[i++];
		}
	}
	return (i);
}

void		t_buffer_getchar(t_buffer *buf)
{
	char	temp[T_BUFFER_GETCHAR_BUFFSIZE + 1];

	temp[T_BUFFER_GETCHAR_BUFFSIZE] = '\0';
	if (read(STDIN_FILENO, temp, T_BUFFER_GETCHAR_BUFFSIZE) == -1)
		handle_error("Can't read STDIN");
	t_buffer_write(buf, temp);
}

char		t_buffer_pop(t_buffer *buf)
{
	char	c;

	c = 0;
	if (buf->i > -1)
	{
		c = buf->s[buf->i];
		buf->s[buf->i] = '\0';
		if (buf->i > 0)
			buf->i--;
	}
	return (c);
}