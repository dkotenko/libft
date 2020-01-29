/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:43:37 by clala             #+#    #+#             */
/*   Updated: 2019/11/27 20:51:09 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_free(char *format, ...)
{
	int		n;
	char	*s;
	va_list	ap;

	va_start(ap, format);
	n = ft_atoi((const char *)format);
	while (n-- > 0)
	{
		s = va_arg(ap, char *);
		free((void *)s);
	}
	va_end(ap);
	return (1);
}
