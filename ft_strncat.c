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

char *ft_strncat (char *dest, const char *app, size_t n)
{
    size_t i;
    size_t j;
	
    i = 0;
    j = 0;
	while(dest[i])
		i++;
	while(j < n && app[j])
		dest[i++] = app[j++];
	dest[i] = '\0';
	return (dest);
}
