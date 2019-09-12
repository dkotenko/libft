/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:22:40 by clala             #+#    #+#             */
/*   Updated: 2019/09/07 20:27:11 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr (const char *str, int ch)
{
	char *p;

	p = NULL;
	while(*str)
	{
		if (*str == ch)
			p = (char *)str;
		str++;
	}
	if (p)
		return (p);
	if (!ch)
		return ((char *)str);
	return (NULL);
}
