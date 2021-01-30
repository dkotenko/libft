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

int					t_htable_find(t_htable *table, void *key)
{
	int				hash;
	int				i;

	hash = table->hash(key, table->size);
	if (!table->table[hash])
		return (0);
	i = 0;
	while (hash + i < table->real_size)
	{
		if (!table->cmp(table->table[hash + i], key))
			return (hash + i);
		i++;
	}
	return (0);
}

int					t_htable_contains(t_htable *table, void *key)
{
	if (t_htable_find(table, key))
		return (1);
	return (0);
}

void				*t_htable_get(t_htable *table, void *key)
{
	int				hash;

	hash = t_htable_find(table, key);
	if (!hash)
		return (NULL);
	return (table->table[hash]->value);
}

int					t_htable_remove(t_htable **table, void *key)
{
	int				hash;

	if (!(hash = t_htable_find(*table, key)))
		return (0);
	t_htable_data_free(t_htable_get(*table, key));
	return (1);
}



