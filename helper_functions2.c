/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:11:03 by atoof             #+#    #+#             */
/*   Updated: 2023/02/19 16:22:54 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	if (tmp == NULL)
		ft_printf("\nStack is empty");
	else
	{	
		while (tmp->next != NULL)
		{
			ft_printf("%d--->", tmp->data);
			tmp = tmp->next;
		}
		ft_printf("%d\n", tmp->data);
	}
}

void	ft_free_str_array(char **str_array)
{
	int	i;

	i = 0;
	while (str_array[i])
	{
		free(str_array[i]);
		i++;
	}
	free(str_array);
	str_array = NULL;
	return ;
}

int	is_sorted(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->data < tmp->next->data)
			tmp = tmp->next;
		else
			return (-1);
	}
	return (1);
}
