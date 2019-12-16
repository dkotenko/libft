/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:45:28 by clala             #+#    #+#             */
/*   Updated: 2019/11/27 20:56:52 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrimend(char const *s, char *charset)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - 1;
	while (i >= 0 && ft_strchr(charset, s[i]))
		i--;
	str = ft_strndup(s, i + 1);
	free((void *)s);
	return (str);
}
