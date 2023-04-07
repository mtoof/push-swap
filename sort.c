/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:48:11 by pooria            #+#    #+#             */
/*   Updated: 2023/04/07 15:50:31 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small(t_node **stack_a, t_node **stack_b, size_t len)
{
	int		min_value;
	size_t	position;

	while (*stack_a != NULL)
	{
		min_value = get_min_value(*stack_a);
		position = get_elem_position(*stack_a, min_value);
		if (position == 0)
		{
			perform_op(stack_a, stack_b, "pb");
		}
		else if (position <= len / 2)
		{
			while ((*stack_a)->data != min_value)
				ra(stack_a);
			perform_op(stack_a, stack_b, "pb");
		}
		else
		{
			while ((*stack_a)->data != min_value)
				rra(stack_a);
			perform_op(stack_a, stack_b, "pb");
		}
	}
	while (*stack_b != NULL)
	{
		perform_op(stack_a, stack_b, "pa");
	}
}
