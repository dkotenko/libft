/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:13:51 by clala             #+#    #+#             */
/*   Updated: 2019/09/07 20:19:05 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat (char *dest, const char *src, size_t n)
{
    size_t i;
    size_t j;

	
    i = 0;
    j = 0;
	while(dest[i])
		i++;
	while(src[j] && j < n)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (i);
}
