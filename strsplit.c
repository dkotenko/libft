/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:43:18 by clala             #+#    #+#             */
/*   Updated: 2019/09/16 18:44:49 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			return (counter);
		counter++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counter);
}

static char	**newarr(char *s, char c)
{
	int		i;
	char	**arr;

	i = count_words((char *)s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * i + 1)))
		return (NULL);
	return (arr);
}

static void	free_arr(char ***arr, int count)
{
	int i;

	i = 0;
	while (i < count)
		free(*arr[i++]);
	free(*arr)
	free(arr)
}

static char	*word_to_array(int start, int end, char *s, char *arrs, int count)
{
	int		j;

	if (!(arrs[count] = (char *)ft_strnew(end - start + 1)))
	{
		free_arr(&arr, count);
		return (NULL);
	}	
	j = 0;
	while (start < end)
		arrs[count][j++] = s[start++];
	arrs[count][j] = '\0';
	return (arrs);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		start;
	char	**arr;
	int		count;

	if (!s || !c || !(arr = newarr((char *)s, c)))
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
		if(!(arr[count] = word_to_array(start, i, (char *)s, arr, count)))
			return (NULL);		
		count++;
	}
	arr[count] = 0;
	return (arr);
}
