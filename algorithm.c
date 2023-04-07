/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/02/24 16:27:40 by atoof             #+#    #+#             */
/*   Updated: 2023/03/17 15:32:22 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_node **stack_a, t_node **stack_b, size_t size)
{
	if (size == 2)
	{
		if (is_sorted(stack_a) != 1)
			sa(stack_a);
		return ;
	}
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
}
