/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:29:40 by clala             #+#    #+#             */
/*   Updated: 2019/11/27 20:50:17 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_imax(char *format, ...)
{
	int		n;
	int		i;
	int		max;
	int		arg;
	va_list ap;

	va_start(ap, format);
	n = ft_ctoi(format[0]);
	max = -2147483648;
	i = 0;
	while (i < n)
	{
		arg = va_arg(ap, int);
		max = arg > max ? arg : max;
		i++;
	}
	va_end(ap);
	return (max);
}