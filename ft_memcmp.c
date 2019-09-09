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

#include <string.h>

int memcmp( const void * memptr1, const void * memptr2, size_t num )
{
	size_t i;

	i = 0;
	while(memptr1[i] && (char )*memptr2[i])
	{
		if((char *)memptr1[i] > (char *)memptr2[i])
			return (char *)memptr1[i] - (char *)memptr2[i];
		else if ((char *)memptr1[i] < (char *)memptr2[i])
			return (char *)memptr1[i] - (char *)memptr2[i];
		i++;
	}
	return 0;
