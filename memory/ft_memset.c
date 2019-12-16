/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:20:59 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:27:04 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *destination, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char*)destination;
	while (n > 0)
	{
		*(s++) = (unsigned char)c;
		n--;
	}
	return (destination);
}
