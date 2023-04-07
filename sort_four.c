/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 01:59:23 by pooriatoof        #+#    #+#             */
/*   Updated: 2023/04/07 16:39:21 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_node **stack_a, t_node **stack_b)
{
	int	min_value;

	while (!is_sorted(stack_a))
	{
		min_value = get_min_value(*stack_a);
		while ((*stack_a)->data != min_value)
			perform_op(stack_a, stack_b, "ra");
		perform_op(stack_a, stack_b, "pb");
		sort_three(stack_a);
		perform_op(stack_a, stack_b, "pa");
	}
}
