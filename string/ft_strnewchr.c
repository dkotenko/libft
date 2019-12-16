/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnewchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:45:00 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:45:01 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnewchr(int size, char c)
{
	char	*buf;
	int		i;

	buf = NULL;
	if (size > 0)
	{
		buf = malloc(size + 1);
		if (!buf)
			return (NULL);
		i = 0;
		while (i < size)
			buf[i++] = c;
		buf[i] = '\0';
	}
	return (buf);
}
