/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:52:22 by clala             #+#    #+#             */
/*   Updated: 2019/11/26 20:27:04 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar_fd((char)s[i], fd);
			i++;
		}
		ft_putchar_fd('\n', fd);
	}
}