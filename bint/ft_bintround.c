/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintround.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:25:04 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:25:05 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_bintround(char *num, int prec)
{
	int32_t	decimals;
	char	*decpt;

	num = ft_strdup(num);
	prec = (prec >= 0) ? prec : 6;
	if ((decpt = ft_strchr(num, '.')))
	{
		decimals = (ft_strlen(num) - 1) - (decpt - num);
		if (decimals > prec || prec == 0)
		{
			if (ft_ctoi(*(decpt + prec + 1)) > 4 && (ft_ctoi(*(decpt + prec - 1)) % 2))
				num = ft_bintaddtn(num, ft_ldtoa(ft_pow(10, -prec), prec));
		}
		else
			num = ft_strjoinfree(num, ft_strnewchr(prec - decimals, '0'), 1, 1);
		num[(ft_strchr(num, '.') - num) + ((prec) ? prec + 1 : 0)] = '\0';
	}
	else if (prec)
		num = ft_strjoinfree(ft_strjoinfree(num, ".", 1, 0),
				ft_strnewchr(prec, '0'), 1, 1);
	return (num);
}

char		*ft_bintroundfree(char *num, int precision, int free_num)
{
	char	*str;

	str = ft_bintround(num, precision);
	if (free_num && num)
		free((void *)num);
	return (str);
}
