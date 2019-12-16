/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:20:09 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:27:26 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX 9223372036854775807

int						ft_atoi(const char *s)
{
	unsigned long long	n;
	int					sign;

	n = 0;
	sign = 1;
	while (*s && ((*s >= 9 && *s <= 13) || *s == ' '))
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s && *s >= '0' && *s <= '9')
	{
		n = n * 10 + *s - '0';
		if (n > (unsigned long long)MAX && sign == 1)
			return (-1);
		if (n > (unsigned long long)MAX && sign == -1)
			return (0);
		s++;
	}
	n *= sign;
	return ((int)n);
}
