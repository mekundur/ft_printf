# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mekundur <mekundur@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 17:58:39 by mekundur          #+#    #+#              #
#    Updated: 2024/02/18 21:20:49 by mekundur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c \
      ft_puthex.c ft_putptr.c ft_printfutils.c \
      ft_nbrflags.c ft_hexflags.c ft_strutils.c

OBJ = $(SRC:.c=.o)
LIBFT = li

$(NAME): $(OBJ) 
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

bonus: $(OBJB) $(NAME)
		ar rcs $(NAME) $(OBJB)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
