/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_buffer_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:48:19 by clala             #+#    #+#             */
/*   Updated: 2021/02/07 00:08:25 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_buffer.h"

void			t_buffer_add_size(t_buffer *buf)
{
	char		*new;
	int			i;

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

void			t_buffer_free(t_buffer **buf)
{
	free((*buf)->s);
	free(*buf);
}
