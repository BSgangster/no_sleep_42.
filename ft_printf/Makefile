# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/15 20:14:24 by icarolus          #+#    #+#              #
#    Updated: 2019/09/19 19:26:04 by icarolus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs/

CONV_DIR = srcs/conversions/

FUNC_DIR = srcs/funct/

SRC = ft_printf.c\
	  ft_fd_printf.c\
	  ft_printf_check_flags.c

CONV = conv_int.c\
	  conv_unsigned_int.c\
	  conv_char.c\
	  conv_str.c\
	  conv_utf_8.c\
	  conv_str_utf_8.c\
	  conv_void.c

FUNC = ft_printf_new_arg.c\
	  ft_printf_putint.c\
	  ft_printf_putuint.c\
	  ft_printf_putchar.c\
	  ft_printf_putstr.c\
	  ft_printf_pututf_8.c\
	  ft_printf_putstr_utf_8.c\
	  ft_printf_itoa.c\
	  ft_printf_itoa_hex.c\
	  ft_printf_itoa_oct.c\
	  ft_printf_itoa_bin.c\
	  ft_printf_from_int_to_utf_8.c\
	  ft_printf_funct.c

LIB_SRC = ./libft/ft_strlen.o\
		  ./libft/ft_isdigit.o\
		  ./libft/ft_putstr_fd.o\
		  ./libft/ft_strchr.o\
		  ./libft/ft_strchr.o\
		  ./libft/ft_strcpy.o\
		  ./libft/ft_strdel.o\
		  ./libft/ft_strdup.o\
		  ./libft/ft_strjoin.o\
		  ./libft/ft_strncpy.o\
		  ./libft/ft_strnew.o\
		  ./libft/ft_bzero.o\
		  ./libft/ft_putstr.o\

OBJ_SRC = $(patsubst %.c, $(SRC_DIR)%.o, $(SRC))

OBJ_CONV = $(patsubst %.c, $(CONV_DIR)%.o, $(CONV))

OBJ_FUNC = $(patsubst %.c, $(FUNC_DIR)%.o, $(FUNC))

OBJ = $(SRC:.c=.o) $(CONV:.c=.o) $(FUNC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_SRC) $(OBJ_CONV) $(OBJ_FUNC)
	@$(MAKE) -C libft
	@ar -rc $(NAME) $(OBJ) $(LIB_SRC)
	@ranlib $(NAME)

%.o : %.c
	gcc $(FLAGS) -c -Iincludes -Ilibft $<

clean:
	@$(MAKE) -C libft clean
	@/bin/rm -f $(OBJ)

fclean: clean
	@$(MAKE) -C libft fclean
	@/bin/rm -f $(NAME)

re: fclean
	make

.PHONY: all clean fclean re
