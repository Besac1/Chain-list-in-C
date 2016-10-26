CC	= gcc
NAME	= launch
SRC	= src/my_params_in_list.c	\
	src/my_putchar.c		\
	src/my_putstr.c		
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -L./lib -lmy -o $(NAME)

all:	$(NAME)

clean:	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
