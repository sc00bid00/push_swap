# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 17:33:43 by lsordo            #+#    #+#              #
#    Updated: 2022/12/19 16:53:23 by lsordo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	push_swap

SRC =	ft_init.c\
		ft_prtstk.c\
		ft_freear.c\
		ft_freearg.c\
		ft_index.c\
		pa.c\
		pb.c\
		sa.c\
		ra.c\
		rb.c\
		rra.c\
		ft_defclt.c\
		ft_pregrp.c\
		ft_idntty.c\
		push_swap.c

OBJ =	$(SRC:.c=.o)

LIB =   ./libft/libft.a

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

$(LIB):
	$(MAKE) -C ./libft/

%.o: %.c
	$(CC) -c $(CFLAGS) $(SRC)

clean:
	rm -f *.o
	make clean -C ./libft/

fclean: clean
	rm -f $(NAME)
	make fclean	-C ./libft/

re: fclean all

.PHONY: all clean fclean re
