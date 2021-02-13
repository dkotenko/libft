/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 22:01:36 by clala             #+#    #+#             */
/*   Updated: 2021/02/10 19:52:52 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"


void				t_dlist_node_free(void (*free_func)(t_dlist_node *node),
						t_dlist_node *n)
{
	(*free_func)(n);
}

void				t_dlist_free(t_dlist *dlist,
						void (*free_func)(t_dlist_node *))
{
	t_dlist_node	*node;
	t_dlist_node	*next;

	node = dlist->head;
	while (node)
	{
		next = node->next;
		t_dlist_node_free(free_func, node);
		node = next;
	}
}