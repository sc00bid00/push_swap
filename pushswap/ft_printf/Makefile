# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 16:34:13 by lsordo            #+#    #+#              #
#    Updated: 2022/11/18 16:05:45 by lsordo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
AR		= ar
CFLAGS	= -I. -Wall -Wextra -Werror
NAME	= libftprintf.a

SRC		=	ft_printf.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_strlen.c\
			ft_putnbr_fd_m.c

OBJ		=	$(SRC:.c=.o)

DEPS	=	ft_printf.h

all: $(NAME)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	$(AR) rcs $@ $^

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
