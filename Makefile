# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 21:04:47 by yarroubi          #+#    #+#              #
#    Updated: 2021/05/05 14:36:15 by youness          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FT_LST_PATH = ft_lst
FT_MATH_PATH = ft_math
FT_CTYPE_PATH = ft_ctype
FT_STDIO_PATH = ft_stdio
FT_STDLIB_PATH = ft_stdlib
FT_STRING_PATH = ft_string
FT_ALGORITHMS_PATH = ft_algorithms


SRC = 

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):$(OBJ)
	@ar -rc $(NAME) $(OBJ) ; ranlib $(NAME)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf $(OBJ) $(BONUS_OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
