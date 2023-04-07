/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/02/24 17:45:54 by atoof             #+#    #+#             */
/*   Updated: 2023/03/16 16:33:21 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_node *stack)
{
	int	size;

	size = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

int	get_max_value(t_node *stack)
{
	int	max_value;

	max_value = stack->data;
	while (stack != NULL)
	{
		if (stack->data > max_value)
			max_value = stack->data;
		stack = stack->next;
	}
	return (max_value);
}

int	get_min_value(t_node *stack)
{
	int	min_value;

	min_value = stack->data;
	while (stack != NULL)
	{
		if (stack->data < min_value)
			min_value = stack->data;
		stack = stack->next;
	}
	return (min_value);
}

size_t	get_elem_position(t_node *stack, int value)
{
	size_t	pos;

	pos = 0;
	while (stack != NULL)
	{
		if (stack->data == value)
			break ;
		stack = stack->next;
		pos++;
	}
	return (pos);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
