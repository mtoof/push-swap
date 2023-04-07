/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:52:57 by atoof             #+#    #+#             */
/*   Updated: 2023/03/17 11:58:29 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	perform_op(t_node **stack_a, t_node **stack_b, char *op)
{
	if (ft_strcmp(op, "sa") == 0)
		sa(stack_a);
	else if (ft_strcmp(op, "sb") == 0)
		sb(stack_b);
	else if (ft_strcmp(op, "ss") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(op, "pa") == 0)
		pa(stack_a, stack_b);
	else if (ft_strcmp(op, "pb") == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp(op, "ra") == 0)
		ra(stack_a);
	else if (ft_strcmp(op, "rb") == 0)
		rb(stack_b);
	else if (ft_strcmp(op, "rr") == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp(op, "rra") == 0)
		rra(stack_a);
	else if (ft_strcmp(op, "rrb") == 0)
		rrb(stack_b);
	else if (ft_strcmp(op, "rrr") == 0)
		rrr(stack_a, stack_b);
}
