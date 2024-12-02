# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opopov <opopov@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 11:46:31 by opopov            #+#    #+#              #
#    Updated: 2024/12/02 15:49:52 by opopov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := libftprintf.a
SRC_DIR := srcs
SRC     := ft_printf.c pathes/ch_path.c pathes/string_path.c  \
		   pathes/decimal_path.c pathes/unsigned_decimal_path.c \
		   pathes/hexadecimal_lower_path.c pathes/hexadecimal_upper_path.c \
		   pathes/void_path.c

OBJ     := $(SRC:.c=.o)
CC      := cc
CFLAGS  := -Wall -Wextra -Werror

LIBFT_DIR	:= libft
LIBFT		:= $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: $(SRC_DIR)/%.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
