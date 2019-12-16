/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintfmt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:24:34 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:24:53 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_bintfmt(char *number)
{
	int		i;

	i = 0;
	while (number[i] && number[i] != '.')
		++i;
	if (ft_strchr(number, '.'))
	{
		number = ft_strtrimend(number, "0");
		number = ft_strnlstrip(number, "0", i - 1);
	}
	else
		number = ft_strnlstrip(number, "0", i - 1);
	return (number);
}
