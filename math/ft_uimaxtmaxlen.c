/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uimaxtmaxlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:43:24 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:43:24 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_uimaxtmaxlen(uintmax_t n)
{
	size_t	length;

	length = 0;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}
