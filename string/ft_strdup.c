/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:40:19 by clala             #+#    #+#             */
/*   Updated: 2019/11/27 20:53:27 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*dupl;
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	dupl = (char *)malloc(sizeof(char) * (len + 1));
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
