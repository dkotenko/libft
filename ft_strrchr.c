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
	int i;
	unsigned char c;
	
	c = (char)ch;
	p = NULL;
	while(str[i])
	{
		if (str[i] == c)
			p = *(str + i);
		i++;
	}
	return p;
}
