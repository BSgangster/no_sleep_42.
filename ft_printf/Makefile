# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/15 20:14:24 by icarolus          #+#    #+#              #
#    Updated: 2019/09/26 15:49:57 by icarolus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printflibr.a

FLAGS = -Wall -Wextra -Werror

SRC_DIR = src/

CONV_DIR = src/conversions/

FUNC_DIR = src/functions/

SRC = ft_printf.c\
	  ft_printf_fd.c\
	  ft_check_flags.c

CONV = cnv_integer.c\
	  cnv_u_integer.c\
	  cnv_character.c\
	  cnv_string.c\
	  cnv_utf8.c\
	  cnv_string_utf8.c\
	  cnv_voidtype.c

FUNC = ft_prnf_new_arg.c\
	  ft_prnf_putint.c\
	  ft_prnf_putuint.c\
	  ft_prnf_putchar.c\
	  ft_prnf_putstr.c\
	  ft_prnf_pututf_8.c\
	  ft_prnf_putstr_utf_8.c\
	  ft_prnf_itoa.c\
	  ft_prnf_itoa_hex.c\
	  ft_prnf_itoa_oct.c\
	  ft_prnf_itoa_bin.c\
	  ft_prnf_from_int_to_utf_8.c\
	  ft_prnf_funct.c

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
