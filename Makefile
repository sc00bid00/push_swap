# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 17:33:43 by lsordo            #+#    #+#              #
#    Updated: 2022/12/16 10:29:54 by lsordo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	a

SRC =
		main.c

OBJ =	$(SRC:.c=.o)

LIB =   ./libft/libft.a

CC= cc

CFLAGS = -Wall -Wextra -Werror

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
