NAME = libft.a
FLAGES = -Wall -Wextra -Werror
GCC = gcc
SRC = *.c
OPTION = -c $(SRC)
OBJ = *.o

all: $(NAME)

$(NAME):
	$(GCC) $(FLAGS) $(OPTION)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
