/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <clala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:55:46 by clala             #+#    #+#             */
/*   Updated: 2020/02/15 21:53:21 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_listpop(t_list *list, void *value)
{
	t_list	*temp;
	t_list	*prev;
	
	if (!list)
		return NULL;
	prev = list;
	if (!ft_memcmp(list->content, value, list->content_size)
	{
		list = list->next;
		return prev;
	}
	temp = list->next;
	while (temp)
	{
		if (!ft_memcmp(temp->content, value, temp->content_size))
		{
			prev->next = temp->next;
			temp->next = NULL;
			return temp->next;
		}
		prev = temp;
		temp = temp->next;
	}
	return NULL;
}
