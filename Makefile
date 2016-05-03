NAME = bsq
SRC = sources/main.c sources/ft_openFile.c sources/ft_getMapSize.c sources/ft_init.c sources/ft_get_map.c sources/ft_place_x.c sources/ft_block_x.c sources/ft_find_x.c
OBJ = main.o ft_openFile.o ft_getMapSize.o ft_init.o ft_get_map.o ft_place_x.o ft_block_x.o ft_find_x.o
FLAGS = -Wall -Werror -Wextra
INCLUDE = includes/

all: $(NAME)
		gcc $(FLAGS) -I$(INCLUDE) -o $(NAME) $(OBJ)
$(NAME):
		gcc $(FLAGS) -I$(INCLUDE) -c $(SRC)
clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all