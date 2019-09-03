/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:17:39 by clala             #+#    #+#             */
/*   Updated: 2019/09/03 20:17:40 by clala            ###   ########.fr       */
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
	len = 0;
	while (src[len])
	{
		dupl[len] = src[len];
		len++;
	}
	dupl[len] = '\0';
	return (dupl);
}
