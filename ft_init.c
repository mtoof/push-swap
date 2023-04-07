/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:00:02 by atoof             #+#    #+#             */
/*   Updated: 2023/02/20 12:37:44 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(int ac, char **argv, t_node **stack)
{
	int		i;

	if (ac == 2)
	{
		i = 0;
		while (argv[i])
			i++;
		i--;
		while (i)
		{
			push(ft_atoi(argv[i]), stack);
			i--;
		}
	}
	else
	{
		i = ac - 1;
		while (i > 0)
		{
			push(ft_atoi(argv[i]), stack);
			i--;
		}
	}
}
