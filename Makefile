# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 17:17:05 by ksaffron          #+#    #+#              #
#    Updated: 2021/12/09 15:23:18 by ksaffron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIST =	ft_printf.c		ft_getnbr_size.c	ft_putstr.c	\
		ft_putnbr.c		ft_putptr_hex.c \


SRC = $(LIST)


OBJ = $(SRC:.c=.o)


RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rcs $(NAME) $?

%.o : %.c libftprintf.h
	$(CC) $(FLAGS) -c $< -o $@ -I libftprintf.h

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
