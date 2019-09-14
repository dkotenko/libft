/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:47:03 by clala             #+#    #+#             */
/*   Updated: 2019/09/14 14:29:23 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_reverse(char *s)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	while (s[j])
		j++;
	j--;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_lennbr(int n)
{
	int i;

	i = 0;
	if (!(n > 0))
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		sign;
	char	*s;
	int		len;
	int		i;

	len = ft_lennbr(n);
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
	ft_reverse(s);
	return (s);
}
