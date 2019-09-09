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

int memcmp( const void * memptr1, const void * memptr2, size_t num )
{
	size_t i;
	char *p1;
	char *p2;

	p1 = (char *)memptr1;
	p2 = (char *)memptr2;
	i = 0;
	while(p1[i] && p2[i] && i < num)
	{
		if(p1[i] > p2[i])
			return (pr1[i] - ptr2[i]);
		else if (p1[i] < pr2[i])
			return (p1[i] - pr2[i]);
		i++;
	}
	return 0;
