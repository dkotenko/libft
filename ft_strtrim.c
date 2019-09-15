/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:42:19 by clala             #+#    #+#             */
/*   Updated: 2019/09/15 20:19:52 by clala            ###   ########.fr       */
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
	if (!s[i])
		return (char *)s + i;
	end = ft_strlen((char *)s) - 1;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	str = ft_strnew((size_t)(end - i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (!(i > end))
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
