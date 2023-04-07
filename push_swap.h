/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/02/18 12:23:52 by atoof             #+#    #+#             */
/*   Updated: 2023/03/17 12:52:21 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>
# include <sys/types.h>

typedef unsigned char t_bool;
# define FALSE 0
# define TRUE 1

typedef struct s_node
{
	int data;
	struct s_node *next;
} t_node;

t_node		*create_node(int data);
void		ft_init(int ac, char **argv, t_node **stack);
void		push(int data, t_node **stack);
int			pop(t_node **stack);
int			ft_check(int argc, char **argv, t_node **stack);
int			ft_lstsize(t_node *stack);
void		ft_free_str_array(char **str_array);
void		sa(t_node **stack_a);
void		sb(t_node **stack_b);
void		ss(t_node **stack_a, t_node **stack_b);
void		ra(t_node **stack_a);
void		rb(t_node **stack_b);
void		rra(t_node **stack_a);
void		rrb(t_node **stack_b);
void		pa(t_node **stack_a, t_node **stack_b);
void		pb(t_node **stack_a, t_node **stack_b);
int			is_sorted(t_node **stack_a);
int			get_max_value(t_node *stack);
size_t		get_elem_position(t_node *stack, int value);
int			get_min_value(t_node *stack);
void		sort_stack(t_node **stack_a, t_node **stack_b, size_t size);
void		sort_three(t_node **stack_a);
void		rr(t_node **stack_a, t_node **stack_b);
void		rrr(t_node **stack_a, t_node **stack_b);
void		perform_op(t_node **stack_a, t_node **stack_b, char *op);
int			ft_strcmp(char *s1, char *s2);
long		ft_atol(const char *str);
void		display(t_node **stack);
void		sort_four(t_node **stack_a, t_node **stack_b);
void		sort_five(t_node **stack_a, t_node **stack_b);
void		sort_small(t_node **stack_a, t_node **stack_b, size_t len);
void		sort_big(t_node **stack_a, t_node **stack_b);

#endif
