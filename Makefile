# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 17:17:05 by ksaffron          #+#    #+#              #
#    Updated: 2022/06/16 10:16:19 by ksaffron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

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

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@ -I ft_printf.h

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
