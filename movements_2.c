/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:11:07 by atoof             #+#    #+#             */
/*   Updated: 2023/03/17 12:07:59 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_node **stack_b)
{
	t_node	*tail;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tail = *stack_b;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = *stack_b;
	*stack_b = (*stack_b)->next;
	tail->next->next = NULL;
	ft_printf("rb\n");
	// display(stack_b);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_a)
		return ;
	push(pop(stack_a), stack_b);
	ft_printf("pb\n");
	// display(stack_b);
}

void	rrb(t_node **stack_b)
{
	t_node	*bottom;
	t_node	*tmp;

	if (!*stack_b)
		return ;
	bottom = *stack_b;
	tmp = *stack_b;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	bottom = tmp->next;
	tmp->next = NULL;
	bottom->next = *stack_b;
	*stack_b = bottom;
	ft_printf("rrb\n");
	// display(stack_b);
}

void	sb(t_node **stack_b)
{
	int	top_data;
	int	next_data;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	top_data = (*stack_b)->data;
	next_data = (*stack_b)->next->data;
	(*stack_b)->data = next_data;
	(*stack_b)->next->data = top_data;
	ft_printf("sb\n");
	// display(stack_b);
}
