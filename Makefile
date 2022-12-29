# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 17:33:43 by lsordo            #+#    #+#              #
#    Updated: 2022/12/29 11:04:53 by lsordo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	push_swap

NAME_B =checker

CC = gcc

SRC =	ft_init.c\
		ft_prtstk.c\
		ft_freear.c\
		ft_freearg.c\
		ft_index.c\
		pa.c\
		pb.c\
		sa.c\
		sb.c\
		ss.c\
		ra.c\
		rb.c\
		rr.c\
		rra.c\
		rrb.c\
		rrr.c\
		ft_defclt.c\
		ft_pregrp.c\
		ft_idntt.c\
		ft_stksize.c\
		ft_findfirst.c\
		ft_findlast.c\
		ft_isnstk.c\
		ft_restack.c\
		ft_simple.c\
		ft_getmaxv.c\
		ft_complex.c\
		ft_reset.c\
		ft_singlein.c\

SRC_PS =$(SRC)\
		push_swap.c

SRC_B =	$(SRC)\
		get_next_line.c\
		get_next_line_utils.c\
		ft_sorted.c\
		ft_getcmds.c\
		ft_checkfail.c\
		ft_act.c\
		checker.c

SRC_PATH = ./src/
OBJ_PATH = ./obj/
HEADER_PATH = ./includes/

OBJ =	$(SRC_PS:%.c=$(OBJ_PATH)%.o)

OBJ_B =	$(SRC_B:%.c=$(OBJ_PATH)%.o)

LIB =	./libft/libft.a

CFLAGS = -Wall -Wextra -Werror -I $(HEADER_PATH) -g

all: $(NAME)

bonus: $(NAME_B)

$(NAME): $(OBJ) $(LIB)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

$(NAME_B): $(OBJ_B) $(LIB)
	$(CC) $(OBJ_B) $(LIB) -o $(NAME_B)

$(LIB):
	$(MAKE) -C ./libft/

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) -c $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJ_PATH)*.o
	make clean -C ./libft/

fclean: clean
	rm -f $(NAME) $(NAME_B)
	make fclean -C ./libft/

re: fclean all

.PHONY: all clean fclean re bonus
