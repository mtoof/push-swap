# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 13:20:08 by atoof             #+#    #+#              #
#    Updated: 2023/04/05 14:28:29 by atoof            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = algorithm.c create_node.c ft_check.c helper_functions1.c \
	helper_functions2.c ft_init.c movements_1.c movements_2.c \
	movements_3.c perform_op.c pop_push.c push_swap.c sort_three.c \
	ft_atol.c sort_four.c sort_five.c sort.c
HEADER = push_swap.h
LIBFT = ./libft/libft.a
FLAGS = -Wall -Werror -Wextra

all: $(NAME)
	
$(NAME): $(SRC)
	make -C ./libft
	cc $(FLAGS) $(SRC) -I$(HEADER) $(LIBFT) -o $@

clean:
	make clean -C ./libft

fclean: clean
	make fclean -C ./libft
	/bin/rm -f $(NAME)

re: fclean all
