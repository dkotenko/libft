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
/*
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;
	i = 0;
	while (dest[i] != '\0')
	++i;
	res = 0;
	while (src[res] != '\0')
	++res;	
	if (size <= i)
	res += size;
	else
	res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
	dest[i] = src[j];
	i++;							
	j++;
	}
	dest[i] = '\0';
	return (res);
	}

*/	
size_t ft_strlcat (char *dest, const char *src, size_t n)
{
    size_t i;
    size_t j;
    size_t len;
	
    i = 0;
    j = 0;
    len = 0;
	while(dest[i])
		i++;
	while(src[len])
		len++;
	if (i < n)
		len += i;
	else
		len += n;
	while(src[j] && i + 1 < n)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len);
}
