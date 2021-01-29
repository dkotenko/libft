/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_htables.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:47:48 by clala             #+#    #+#             */
/*   Updated: 2020/02/15 14:45:59 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/t_htable.h"

int				get_hash(const void *p, int size)
{
	int			i;
	intmax_t	hash;
	int			len;
	const char	*s;

	s = (const char*)p;
	hash = 1;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		hash *= (((hash * (intmax_t)INIT_PRIME_NUMBER)
			+ (intmax_t)s[i]) % (intmax_t)size);
		i++;
	}
	if (hash == 0)
		hash = 1;
	if (hash < 0)
		return ((hash % size) * -1);
	return (hash % size);
}
