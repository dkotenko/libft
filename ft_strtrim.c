/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:42:19 by clala             #+#    #+#             */
/*   Updated: 2019/09/16 19:17:13 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;
	int		end;

	if (!s)
		return (NULL);
	if (!*s)
		return ((char *)s);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	end = ft_strlen((char *)s) - 1;
	while (end > i && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	if (!(str = ft_strnew((size_t)(end - i + 2))))
		return (NULL);
	j = 0;
	while (!(i > end))
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
