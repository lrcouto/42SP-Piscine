# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 15:48:04 by gsenra-a          #+#    #+#              #
#    Updated: 2019/12/11 17:47:30 by gsenra-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = main.c\

SRC2 = main.o\

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -o $(NAME) *.c 
	@perl mapgen.pl 20 20 5 > map_test

clean:
	@rm -f $(SRC2) *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
