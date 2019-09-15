/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:06:30 by clala             #+#    #+#             */
/*   Updated: 2019/09/15 17:06:27 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *dest, size_t n)
{
	size_t	i;
	char	*s;

	s = (char *)dest;
	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}
