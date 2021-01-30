/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_htable.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:47:48 by clala             #+#    #+#             */
/*   Updated: 2020/02/13 19:47:06 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/t_htable.h"

t_htable_data		*t_htable_data_create(void *key, void *value)
{
	t_htable_data	*new;

	if (!(new = (t_htable_data *)malloc(sizeof(t_htable_data))))
		return (NULL);
	new->key = key;
	new->value = value;
	return (new);
}

void                t_htable_data_free(t_htable_data *data)
{
	free(data->key);
	free(data->value);
	free(data);
	data = NULL;
}

