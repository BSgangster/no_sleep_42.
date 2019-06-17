NAME = libft.a
FLAGES = -fPIC -Wall -Werror -Wextra -pedanti
GCC = gcc
SRC = *.c
OPTION = -c $(SRC)
OBJ = *.o

all: $(NAME)

$(NAME):
	$(GCC) $(FLAGS) $(OPTION)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

so:
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
