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

#ifndef T_BUFFER_H
# define T_BUFFER_H

# include "libft.h"
# define T_BUFFER_BUFF_SIZE 0xFF
# define T_BUFFER_GETCHAR_BUFFSIZE 1

typedef struct	s_buffer
{
	int			size;
	int			i;
	char		*s;
}				t_buffer;

void			t_buffer_add_size(t_buffer *buf);
t_buffer		*t_buffer_create(int size);
void			t_buffer_free(t_buffer **buf);
int				t_buffer_write(t_buffer *buf, const char *str);
# endif