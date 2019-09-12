/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:59:44 by clala             #+#    #+#             */
/*   Updated: 2019/09/07 20:10:55 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp( const void *memptr1, const void *memptr2, size_t num )
{
	size_t i;
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)memptr1;
	p2 = (unsigned char *)memptr2;
	i = 0;
	while(p1[i] == p2[i] && i < num)
		i++;
	if (i == num)
		return 0;
	if(p1[i] > p2[i])
		return (1);
	else if (p1[i] < p2[i])
		return (-1);	
	return 0;
}
