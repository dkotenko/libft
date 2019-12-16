/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlstrip.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:45:10 by clala             #+#    #+#             */
/*   Updated: 2019/11/27 20:58:29 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnlstrip(char const *s, char *charset, int n)
{
	int		first;
	char	*lstripped;

	if (s)
	{
		first = 0;
		while (n-- > 0 && s[first] && ft_strchr(charset, s[first]))
			++first;
		lstripped = ft_strdup(s + first);
		free((void *)s);
		return (lstripped);
	}
	return (NULL);
}
