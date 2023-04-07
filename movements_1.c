/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/02/20 17:57:35 by atoof             #+#    #+#             */
/*   Updated: 2023/03/17 12:08:31 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_b)
		return ;
	push(pop(stack_b), stack_a);
	ft_printf("pa\n");
}

void	sa(t_node **stack_a)
{
	int	top_data;
	int	next_data;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	top_data = (*stack_a)->data;
	next_data = (*stack_a)->next->data;
	(*stack_a)->data = next_data;
	(*stack_a)->next->data = top_data;
	ft_printf("sa\n");
}

// void	ra(t_node **stack_a)
// {
// 	t_node	*last_node;
// 	t_node	*second_last_node;

// 	if (*stack_a == NULL || (*stack_a)->next == NULL)
// 		return ;
// 	last_node = *stack_a;
// 	while (last_node->next != NULL)
// 		last_node = last_node->next;
// 	second_last_node = *stack_a;
// 	while (second_last_node->next != last_node)
// 		second_last_node = second_last_node->next;
// 	last_node->next = *stack_a;
// 	*stack_a = last_node;
// 	second_last_node->next = NULL;
// 	ft_printf("ra\n");
// }

void	ra(t_node **stack_a)
{
	t_node	*tail;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tail = *stack_a;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = *stack_a;
	*stack_a = (*stack_a)->next;
	tail->next->next = NULL;
	ft_printf("ra\n");
}

void	rra(t_node **stack_a)
{
	t_node	*bottom;
	t_node	*tmp;

	if (!*stack_a)
		return ;
	bottom = *stack_a;
	tmp = *stack_a;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	bottom = tmp->next;
	tmp->next = NULL;
	bottom->next = *stack_a;
	*stack_a = bottom;
	ft_printf("rra\n");
}
