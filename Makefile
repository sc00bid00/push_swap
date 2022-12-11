# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 18:48:48 by lsordo            #+#    #+#              #
#    Updated: 2022/12/11 22:00:26 by lsordo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	lists
SRC =	ft_freelst.c\
		ft_prtlst.c\
		ft_swap.c\
		ft_srtlstnum.c\
		ft_cmp.c\
		ft_crtlst.c\
		ft_srtlstidx.c\
		ft_swapidx.c\
		lists.c

OBJ =	$(SRC:.c=.o)
DEP =	lists.h
CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c $(DEP)
	$(CC) -c $(CFLAGS) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all


