/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 15:10:51 by clala             #+#    #+#             */
/*   Updated: 2020/02/15 21:53:21 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		copy_to_fd_arr(char **fd_arr, char *stack)
{
	char		*tmp;
	size_t		len;

	if (!stack[0])
		return ;
	if (!*fd_arr)
	{
		*fd_arr = ft_strdup(stack);
		return ;
	}
	len = ft_strlen(*fd_arr);
	tmp = *fd_arr;
	*fd_arr = ft_strnew(len + BUFF_SIZE);
	if (*fd_arr)
	{
		ft_memcpy(*fd_arr, (const void *)tmp, len);
		ft_memcpy(*fd_arr + len, (const void *)stack, BUFF_SIZE + 1);
	}
	ft_strclr(stack);
	free(tmp);
}

static void		get_line_from_fd_arr(t_gnl *gnl, char **line,
		char *n, int len_before_n)
{
	char		*tmp;
	size_t		len_n;
	int			fd;

	fd = gnl->last_fd;
	*line = ft_strnew(len_before_n + 1);
	ft_memcpy(*line, gnl->fd_arr[fd], len_before_n);
	tmp = gnl->fd_arr[fd];
	len_n = ft_strlen(n);
	if (len_n && len_n < BUFF_SIZE + 1)
	{
		ft_strclr(gnl->stack);
		ft_memcpy(gnl->stack, n + 1, len_n - 1);	
	}
	else if (len_n)
	{
		gnl->fd_arr[fd] = ft_strnew(len_n);
		ft_memcpy(gnl->fd_arr[fd], n + 1, len_n - 1);
	}
	free(tmp);
}

int				get_next_line(int const fd, char **line)
{
	static t_gnl	gnl;
	int			r;
	char		*n;

	copy_to_fd_arr(&gnl.fd_arr[gnl.last_fd], gnl.stack);
	gnl.last_fd = fd;
	r = 0;
	if ((read(fd, gnl.stack, 0) < 0) || fd < 0 || fd > FD_SETSIZE)
		return (-1);
	*line = NULL;
	if (!gnl.fd_arr[fd])
		gnl.fd_arr[fd] = ft_strnew(0);
	while (!(ft_strchr(gnl.fd_arr[fd], '\n')))
	{
		r = read(fd, gnl.stack, BUFF_SIZE);
		if (!r)
			break ;
		gnl.stack[r] = '\0';
		copy_to_fd_arr(&gnl.fd_arr[fd], gnl.stack);
		ft_strclr(gnl.stack);
	}
	n = ft_strchr(gnl.fd_arr[fd], '\n');
	if (n) 
		get_line_from_fd_arr(&gnl, line, n, n - gnl.fd_arr[fd]);
	else
	{
		*line = gnl.fd_arr[fd];
		gnl.fd_arr[fd] = NULL;
	}
	if (!r && !gnl.fd_arr[fd] && *line[0] == '\0')
		ft_strdel(line);
	return (*line != NULL);
}
