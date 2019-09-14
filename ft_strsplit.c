/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:43:18 by clala             #+#    #+#             */
/*   Updated: 2019/09/14 19:04:57 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**newarr(char *s)
{
	int		i;
	char	**arr;

	i = ft_strlen((char *)s);
	if (!(arr = (char **)malloc(sizeof(char *) * i + 1)))
		return (NULL);
	return (arr);
}

static char	*word_to_array(int start, int end, char *s, char *arrs)
{
	int		j;

	if (!(arrs = (char *)ft_strnew(end - start + 1)))
		return (NULL);
	j = 0;
	while (start < end)
		arrs[j++] = s[start++];
	arrs[j] = '\0';
	return (arrs);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		start;
	char	**arr;
	int		count;

	if (!(arr = newarr((char *)s)))
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && (char)s[i] == c)
			i++;
		start = i;
		if (!s[i])
			break ;
		while (s[i] && (char)s[i] != c)
			i++;
		arr[count] = word_to_array(start, i, (char *)s, arr[count]);
		count++;
	}
	if (!arr[0])
		return (NULL);
	arr[count] = 0;
	return (arr);
}
