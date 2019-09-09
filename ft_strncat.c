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

char *strncat (char *dest, const char *app, size_t n)
{
	char *temp;
    size_t i;
	
    i = 0;
	temp = dest;
	while(*dest)
		*(dest++);
	while(i < n)
    {
		*(dest++) = *(app++);
        i++;
    }
	*dest = '\0'
	return temp;
