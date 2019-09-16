/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:47:48 by clala             #+#    #+#             */
/*   Updated: 2019/09/15 17:48:54 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbrlen(int n)
{
	int	i;

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