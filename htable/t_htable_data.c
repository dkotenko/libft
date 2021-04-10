/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_htable_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:47:48 by clala             #+#    #+#             */
/*   Updated: 2021/03/13 20:37:01 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/t_htable.h"

t_htable_data		*t_htable_data_create(void *key, void *value)
{
	t_htable_data	*new;

	new = (t_htable_data *)ft_memalloc(sizeof(t_htable_data));
	new->key = key;
	new->value = value;
	return (new);
}

void				t_htable_data_free(t_htable_data *data)
{
	if (!data)
		return ;
	if (data->key)
		free(data->key);
	if (data->value)
		free(data->value);
	free(data);
	data = NULL;
}

void				t_htable_clean_all(t_htable *table)
{
	char			**keys;
	char			**keys_head;

	keys = (char **)t_htable_get_keys(table);
	keys_head = keys;
	while (*keys)
	{
		t_htable_remove(table, *keys);
		keys++;
	}
	free(keys_head);
}
