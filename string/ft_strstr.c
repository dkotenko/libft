/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:02:59 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:27:04 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strstr(const char *str, const char *substr)
{
	int				i;
	int				j;
	unsigned char	*p;

	i = 0;
	if (!*substr)
		return ((char *)str);
	while (str[i])
	{
		if (str[i] == *substr)
		{
			j = 0;
			p = (unsigned char *)str + i;
			while (substr[j] && str[i] == substr[j])
			{
				i++;
				j++;
			}
			if (!substr[j])
				return ((char *)p);
			i -= j;
		}
		i++;
	}
	return (NULL);
}