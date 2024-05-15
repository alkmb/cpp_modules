# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 00:55:02 by nobmk             #+#    #+#              #
#    Updated: 2024/05/16 00:56:11 by nobmk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= HI_THIS_IS_BRAIN
CC= c++
CFLAGS= -Wall -Wextra -Werror
RM = rm-rf
SRC= main.cpp

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	echo "Compilation done!"

clean:
	$(RM) $(NAME)
	echo "Clean done!"

fclean: clean

re: fclean all