/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:09:59 by atoof             #+#    #+#             */
/*   Updated: 2023/02/20 14:26:24 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pop(t_node **stack)
{
	t_node	*top_node;
	int		data;

	if (!*stack)
		return (0);
	top_node = *stack;
	data = top_node->data;
	*stack = top_node->next;
	free(top_node);
	return (data);
}

void	push(int data, t_node **stack)
{
	t_node	*new_node;

	new_node = create_node(data);
	if (!new_node)
		return ;
	if (!*stack)
		new_node->next = NULL;
	else
		new_node->next = *stack;
	*stack = new_node;
}
