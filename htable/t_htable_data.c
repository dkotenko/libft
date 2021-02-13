/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_htable_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:47:48 by clala             #+#    #+#             */
/*   Updated: 2021/02/07 00:05:09 by clala            ###   ########.fr       */
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
	free(data->key);
	free(data->value);
	free(data);
	data = NULL;
}
