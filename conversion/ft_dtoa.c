/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:28:14 by clala             #+#    #+#             */
/*   Updated: 2019/12/24 18:37:33 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define DOUBLE_EXPONENT_WIDTH 11
#define DOUBLE_MANTISSA_WIDTH 52
#define DOUBLE_SIZE 64
#define DOUBLE_EXPONENT_MAX  2048 - 1 - DOUBLE_BIAS - DOUBLE_MANTISSA_WIDTH)
#define DOUBLE_BIAS ((1 << (DOUBLE_EXPONENT_WIDTH - 1)) - 1)
#define DOUBLE_MANTISSA_MASK  4503599627370495U
#define DOUBLE_IMPLICIT_MANTISSA_BIT (1L << DOUBLE_MANTISSA_WIDTH)

char			*double_is_exception(double n, t_double t_dbl)
{
	char		*str;

	str = NULL;
	if (t_dbl.mantissa == 0 && t_dbl.exponent == 0)
		str = ft_strdup("0");
	else if (n != n)
		str = ft_strdup("nan");
	else if (t_dbl.exponent == DOUBLE_EXPONENT_MAX &&
	t_dbl.mantissa == DOUBLE_IMPLICIT_MANTISSA_BIT)
	{
		if (t_dbl.sign)
			str = ft_strdup("-inf");
		else
			str = ft_strdup("inf");
	}
	return (str);
}

char			*ft_dtoa(double n, int precision)
{
	t_double	num;
	char		*str;

	num.sign = *(uintmax_t *)&n >> (DOUBLE_SIZE - 1);
	num.exponent = (short)((*(uintmax_t *)&n << 1 >> (DOUBLE_MANTISSA_WIDTH
					+ 1)) - DOUBLE_BIAS - DOUBLE_MANTISSA_WIDTH);
	num.mantissa = ((*(uintmax_t *)&n & DOUBLE_MANTISSA_MASK) |
			DOUBLE_IMPLICIT_MANTISSA_BIT);
	str = NULL;
	if ((str = double_is_exception(n, num)))
		return (str);
	else
	{
		str = ft_utoa_base(num.mantissa, 0);
		if (num.exponent > 0)
			while (num.exponent-- > 0)
				str = ft_bintmltpl(str, 2);
		else
			while (num.exponent++ < 0)
				str = ft_bintdivsn(str, 2);
	}
	str = ft_bintroundfree(str, ((precision >= 0) ? precision : 6), 1);
	return ((num.sign) ? ft_strjoinfree("-", str, 0, 1) : str);
}
