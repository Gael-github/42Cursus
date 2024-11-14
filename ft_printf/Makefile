# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noah <noah@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 07:37:00 by noah       #+#    #+#              #
#    Updated: 2024/11/06 16:54:50 by noah             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a //BIBLIOTECA ESTATICA; ARCHIVO QUE SE VA A GENERAR//
FILES = ft_printf.c \
        ft_nosigne.c \
        ft_numhex.c \
        ft_pointer.c \
        ft_putcharf.c \
        ft_putnbrf.c \
        ft_putstrf.c
//files sirve para enumerar archivos//
OBJ = $(FILES:.c=.o)//Define los archivos o.bjeto;transforma los.c en .o//

CC = clang//el compilador que se va a utilizar que podria ser gcc, pero en ese caso es clang//
RM = @rm -f//comando para eliminar archivos//
FLAGS = -Wall -Werror -Wextra //activa las advertencias, 2: advertencias como errores, 3:advertencias adicionales.//
AR = ar crs//ar: sirve para manipular archivos del biblioteca, crs;crear,reemplazar,ordenar//
//reglas//
all: $(NAME)//cuando ponemos solo make se ejecuta all(todo) es decir el nombre del programa//

$(NAME): $(OBJ)//
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	$(CC) main.c $(NAME) -o test_executable

.PHONY: all re clean fclean test