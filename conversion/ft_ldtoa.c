/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:28:29 by clala             #+#    #+#             */
/*   Updated: 2019/12/08 11:34:33 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define BIAS          16383
#define LDBL_MANT_WIDTH 63
#define MAX15BITS       0x7FFF
#define LDBL_EXPONENT_MAX  (MAX15BITS - BIAS - LDBL_MANT_WIDTH)
#define LDBL_MASK         9223372036854775808u

static char			*ldouble_is_exception(t_long_double num)
{
	char			*str;

	str = NULL;
	if (num.exponent == LDBL_EXPONENT_MAX && num.mantissa != LDBL_MASK)
		str = ft_strdup("nan");
	else if (num.exponent == LDBL_EXPONENT_MAX && num.mantissa == LDBL_MASK)
	{
		if (num.sign)
			str = ft_strdup("-inf");
		else
			str = ft_strdup("inf");
	}
	return (str);
}

char				*ft_ldtoa(long double n, int precision)
{
	t_long_double	num;
	char			*str;

	num.ldbl.val = n;
	num.sign = num.ldbl.s[9] >> 7 != 0;
	num.exponent = (*(short *)&num.ldbl.s[8]
			& MAX15BITS) - BIAS - LDBL_MANT_WIDTH;
	num.mantissa = *(intmax_t *)num.ldbl.s;
	precision = (precision >= 0) ? precision : 6;
	str = NULL;
	if ((str = ldouble_is_exception(num)))
		return (str);
	str = ft_ultoa_base(num.mantissa, 10);
	if (num.exponent > 0)
		while (num.exponent-- > 0)
			str = ft_bintmltpl(str, 2);
	else
		while (num.exponent++ < 0 && ft_strlen(str) < 300)
			str = ft_bintdivsn(str, 2);
	str = ft_bintroundfree(str, precision, 1);
	if (num.sign)
		return (ft_strjoinfree("-", str, 0, 1));
	else
		return (str);
}
