# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 19:14:43 by nobenham          #+#    #+#              #
#    Updated: 2025/02/19 11:43:01 by nobenham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

FILES	=	ft_printf.c \
			ft_puthex.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_putunsg.c \
			ft_pointer.c

OBJ = $(FILES:.c=.o)

CC = gcc
RM = @rm -f
FLAGS = -Wall -Werror -Wextra
AR = ar crs

all: $(NAME)
$(NAME):  $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ): $(FILES)
	@echo "Compiling files, please wait...\n"
	$(CC) $(FLAGS) -c $^ 

clean:

	${RM} $(OBJ)

fclean: clean
	${RM} $(NAME)

re: fclean all

test: $(all)
	@gcc  main.c $(NAME)

.PHONY: all re clean fclean