# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itishche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/18 12:32:35 by itishche          #+#    #+#              #
#    Updated: 2019/02/18 12:32:37 by itishche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRC		=	./ft_printf.c \
			./ft_char.c \
			./ft_atoi.c \
			./ft_str.c \
			./minilib.c \
			./ft_int.c \
			./ft_u.c \
			./ft_o.c \
			./ft_itoa_base.c \
			./ft_x.c


OBJ 	= ./ft_printf.o \
			./ft_char.o \
			./ft_atoi.o \
			./ft_str.o \
			./minilib.o \
			./ft_int.o \
			./ft_u.o \
			./ft_o.o \
			./ft_itoa_base.o \
			./ft_x.o

all: $(NAME)

$(NAME): #$(OBJ) includes/ft_printf.h
	gcc -c -I ./includes $(SRC)
	ar rc $@ $(OBJ)
	ranlib $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
