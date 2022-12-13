# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 17:33:43 by lsordo            #+#    #+#              #
#    Updated: 2022/12/13 18:01:35 by lsordo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	a

SRC =	ft_iserr.c\
		ft_prtstk.c\
		ft_freall.c\
		ft_newstk.c\
		ft_addstk.c\
		ft_isdouble.c\
		ft_idxstk.c\
		ft_swap.c\
		ft_swapx.c\
		ft_cmp.c\
		ft_px.c\
		ft_stksize.c\
		ft_sx.c\
		ft_rx.c\
		main.c

OBJ =	$(SRC:.c=.o)

LIB =   ./libft/libft.a \
		./ft_printf/libftprintf.a

CC= cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

$(LIB):
	$(MAKE) -C ./libft/
	$(MAKE) -C ./ft_printf/

%.o: %.c
	$(CC) -c $(CFLAGS) $(SRC)

clean:
	rm -f *.o
	make clean -C ./libft/
	make clean -C ./ft_printf/

fclean: clean
	rm -f $(NAME)
	make fclean	-C ./libft/
	make fclean	-C ./ft_printf/

re: fclean all

.PHONY: all clean fclean re
