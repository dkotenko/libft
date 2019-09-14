/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:40:19 by clala             #+#    #+#             */
/*   Updated: 2019/09/14 12:40:30 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*dupl;
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	dupl = (char *)malloc(len + 1);
	if (!dupl)
		return (NULL);
	len = 0;
	while (src[len])
	{
		dupl[len] = src[len];
		len++;
	}
	dupl[len] = '\0';
	return (dupl);
}
