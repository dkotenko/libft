/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:47:03 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:27:04 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		sign;
	char	*s;
	int		len;
	int		i;

	len = ft_ilen(n);
	sign = n;
	if (!(s = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (n)
	{
		s[i++] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (sign < 0)
		s[i++] = '-';
	else if (sign == 0)
		s[i++] = '0';
	s[i] = '\0';
	ft_strrev(s);
	return (s);
}
