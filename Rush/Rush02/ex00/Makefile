# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/07 15:22:13 by lbonatti          #+#    #+#              #
#    Updated: 2019/12/08 14:54:20 by lcouto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = main.c\
	  conta3.c\
	  print.c\
	  stringmanip.c

SRC2 = main.o\
	   conta3.o\
	   print.o\
	   stringmanip.o

$(NAME):
	@gcc -o $(NAME) $(SRC)

clean:
	@/bin/rm -f $(SRC2)

fclean: clean
	@/bin/rm -f $(NAME)
