/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:53:11 by clala             #+#    #+#             */
/*   Updated: 2019/09/07 19:59:14 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dest, char *src, size_t n)
{
	size_t i;

	i = 0;
	while(src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
		dest[i++] = '\0';
	return dest;
}
