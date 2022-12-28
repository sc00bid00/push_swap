# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 17:33:43 by lsordo            #+#    #+#              #
#    Updated: 2022/12/28 15:07:53 by lsordo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	push_swap

NAME_B = checker

SRC =		ft_init.c\
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

SRC_PS =	$(SRC)\
			push_swap.c

SRC_B =		$(SRC)\
			get_next_line.c\
			get_next_line_utils.c\
			ft_sorted.c\
			ft_getcmds.c\
			ft_checkfail.c\
			ft_act.c\
			checker.c

OBJ =	$(SRC_PS:.c=.o)

OBJ_B =	$(SRC_B:.c=.o)

LIB =   ./libft/libft.a

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

bonus: $(NAME_B)

$(NAME): $(OBJ) $(LIB)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

$(NAME_B): $(OBJ_B) $(LIB)
	$(CC) $(OBJ_B) $(LIB) -o $(NAME_B)

$(LIB):
	$(MAKE) -C ./libft/

%.o: %.c
	$(CC) -c $(CFLAGS) $^

clean:
	rm -f *.o
	make clean -C ./libft/

fclean: clean
	rm -f $(NAME) $(NAME_B)
	make fclean	-C ./libft/

re: fclean all

.PHONY: all clean fclean re bonus
