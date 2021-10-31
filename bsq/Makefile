# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabel-co <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/16 17:18:33 by dabel-co          #+#    #+#              #
#    Updated: 2021/03/17 19:58:42 by dabel-co         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
PATH_SRC = ./src/
FLAG = 
OPTION = -o bsq -O0
SRC = $(PATH_SRC)main.c $(PATH_SRC)ft_read.c $(PATH_SRC)ft_map_error.c $(PATH_SRC)ft_solve.c $(PATH_SRC)ft_atoi.c $(PATH_SRC)ft_count_for_x.c
OBJ = main.o ft_read.o ft_map_error.o ft_solve.o ft_atoi.c ft_count_for_x.o
all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
