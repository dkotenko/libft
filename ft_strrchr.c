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

char *strrchr (const char *str, int ch)
{
	char *p;
	unsigned char c;
	
	c = (char)ch;
	p = NULL;
	while(*str)
	{
		if (*str == c)
			p = (char *)str;
		str++;
	}
	return p;
}
