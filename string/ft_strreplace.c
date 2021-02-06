/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:49:53 by clala             #+#    #+#             */
/*   Updated: 2020/02/15 21:53:21 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strreplace(char *s, char *what, char *to)
{
	char	*new;
	int		counter;
	char	*entry;
	char	*start_new;

	if (!s || !what || !to || !(ft_strlen(what)))
		return (NULL);
	entry = s;
	counter = 0;
	while ((entry = ft_strstr(entry, what)) && ++counter > -1)
		entry += ft_strlen(what);
	if (!(new = ft_strnew(
		ft_strlen(s) + (ft_strlen(to) - ft_strlen(what)) * counter)))
		return (NULL);
	start_new = new;
	while (counter-- && (entry = ft_strstr(s, what)))
	{
		ft_strncpy(start_new, s, entry - s);
		start_new += entry - s;
		ft_strcpy(start_new, to);
		s = entry + ft_strlen(what);
		start_new += ft_strlen(to);
	}
	ft_strcpy(start_new, s);
	return (new);
}