/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_htable2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:47:48 by clala             #+#    #+#             */
/*   Updated: 2020/02/15 14:33:59 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_htable.h"

unsigned long long		hash_func_fnv_1a_64(void *key, int len)
{
    unsigned char		*p;
	unsigned long long	h;
	int i;
	
	p = key;
    h = 0xcbf29ce484222325ULL;
    i = -1;
	while (++i < len)
	{
		h = (h ^ p[i]) * 0x100000001b3ULL;
	}
   return h;
}

unsigned int			hash_func_fnv_1a_32(void *key, int len)
{
    unsigned char		*p;
	unsigned int		h;
	int i;
	
	h = 0x811c9dc5;
	p = key;
	i = -1;
	while (++i < len)
	{
		h = (h ^ p[i]) * 0x01000193;
	}
   return h;
}

unsigned int			hash_func_kernighan_ritchie(const void *p, int size)
{
	int					i;
	uintmax_t			hash;
	int					len;
	const char			*s;

	s = (const char*)p;
	hash = 1;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		hash *= (((hash * (uintmax_t)INIT_PRIME_NUMBER)
			+ (uintmax_t)s[i]) % (uintmax_t)size);
		i++;
	}
	if (hash == 0)
		hash = 1;
	if (hash < 0)
		return ((hash % size) * -1);
	return (hash % size);
}
