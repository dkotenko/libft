/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:43:20 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:43:20 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_pow(double x, double y)
{
	double	val;
	double	sign;

	if (y == 0)
		return (1.0);
	sign = (x < 0) ? -1.0 : 1.0;
	x = (x < 0) ? (-x) : (x);
	val = x;
	if (y < 0)
	{
		y = -y;
		while (--y > -2)
			val /= x;
	}
	else
	{
		while (--y > 0)
			val *= x;
	}
	return (val * sign);
}
