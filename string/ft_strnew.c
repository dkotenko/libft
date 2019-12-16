/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:33:56 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:27:04 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	if (size + 1 < size)
		return (NULL);
	s = (char *)malloc(sizeof(char) * (size + 1));
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
