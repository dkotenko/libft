/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:33:56 by clala             #+#    #+#             */
/*   Updated: 2019/09/14 13:34:36 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = (char *)malloc(sizeof(char) * size + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (i < size + 1)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
