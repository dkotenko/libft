/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:25:52 by clala             #+#    #+#             */
/*   Updated: 2019/09/07 19:31:17 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr (const void *arr, int c, size_t n)
{
	unsigned char *s;
	size_t i;
	
	i = 0;
	s = (unsigned char*)arr;
	while (i < n)
	{
		if (*s == (char)c)
		{
			*s =  (char)c;
			return (s);
		}
		*(s++);
	}
	return (NULL);
}
