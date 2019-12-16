/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintmltpl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:24:49 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:24:56 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_bintmltpl(char *num, int multiplier)
{
	int8_t	tmp;
	int32_t	carry;
	int32_t	i;
	char	*s;

	s = num;
	num = ft_strdup(num);
	carry = 0;
	i = ft_strlen(num) - 1;
	while (i >= 0)
	{
		if (num[i] == '.')
			--i;
		tmp = ft_ctoi(num[i]);
		num[i--] = ft_itoc((tmp * multiplier + carry) % 10);
		carry = ((tmp * multiplier) + carry) / 10;
	}
	if (carry)
		num = ft_strjoinfree(ft_itoa(carry), num, 1, 1);
	if (s)
		free((void *)s);
	return (num);
}
