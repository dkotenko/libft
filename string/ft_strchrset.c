/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:43:37 by clala             #+#    #+#             */
/*   Updated: 2019/11/27 20:51:09 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchrset(const char *str, const char *charset)
{
	int		i;
	char	*s;

	i = 0;
	while (charset[i])
	{
		if ((s = ft_strchr(str, (int)charset[i])))
			return (s);
		i++;
	}
	return (NULL);
}
