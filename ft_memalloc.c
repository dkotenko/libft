/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:32:27 by clala             #+#    #+#             */
/*   Updated: 2019/09/15 20:16:51 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*a;
	
	if (size + 1 < size)
		return(NULL);
	a = malloc(size);
	if (!a)
		return (NULL);
	ft_memset(a, 0, size);
	return (a);
}
