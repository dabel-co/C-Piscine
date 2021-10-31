NAME = rush-02
PATH_SRC = ./src/
FLAG = -Werror -Wall -Wextra
OPTION = -o rush-02
SRC = $(PATH_SRC)main.c $(PATH_SRC)ft_atoi.c $(PATH_SRC)ft_error.c $(PATH_SRC)ft_chop.c $(PATH_SRC)ft_write.c $(PATH_SRC)ft_print.c 
OBJ = main.o ft_atoi.o ft_error.o ft_chop.o ft_write.c ft_print.c
all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
