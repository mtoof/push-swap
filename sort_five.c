/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:21:38 by pooriatoof        #+#    #+#             */
/*   Updated: 2023/04/07 14:41:20 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp_a;
	t_node	*tmp_b;
	int		smallest_index;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	smallest_index = get_elem_position(tmp_a, get_min_value(tmp_a));
	if (smallest_index == 1 || smallest_index == 2)
		ra(&tmp_a);
	if (smallest_index == 2)
		ra(&tmp_a);
	if (smallest_index == 3)
	{
		rra(&tmp_a);
		rra(&tmp_a);
	}
	if (smallest_index == 4)
		rra(&tmp_a);
	pb(&tmp_a, &tmp_b);
	sort_four(&tmp_a, &tmp_b);
	pa(&tmp_a, &tmp_b);
	*stack_a = tmp_a;
}
