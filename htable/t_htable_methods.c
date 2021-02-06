/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_htable_methods.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:47:48 by clala             #+#    #+#             */
/*   Updated: 2021/02/07 00:03:41 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/t_htable.h"

t_hash				t_htable_find(t_htable *table, void *key)
{
	t_hash			hash;
	t_hash			i;
	t_hash			size;

	size = table->size;
	hash = table->hash(key, table->size);
	i = 0;
	while (table->table[hash + i] && hash + i < size)
	{
		if (!table->cmp(table->table[hash + i]->key, key))
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

int					t_htable_remove(t_htable *table, void *key)
{
	t_hash			hash;
	int				i;

	if (!(hash = t_htable_find(table, key)))
		return (0);
	t_htable_data_free(t_htable_get(table, key));
	i = -1;
	while (++i < table->counter)
	{
		if (table->curr_data[i] == hash)
			break ;
	}
	while (i < table->counter - 1)
		table->curr_data[i] = table->curr_data[i + 1];
	table->counter--;
	return (1);
}

int					t_htable_set(t_htable *table, void *key, void *value)
{
	t_hash			hash;

	hash = t_htable_find(table, key);
	if (table->table[hash] && table->table[hash]->value)
		free(table->table[hash]->value);
	table->table[hash]->value = value;
	return (1);
}
