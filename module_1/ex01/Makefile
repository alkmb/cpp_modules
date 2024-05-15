# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 22:52:18 by nobmk             #+#    #+#              #
#    Updated: 2024/05/16 00:52:30 by nobmk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar-Brainz!
CC = c++
CFLAGS = -Wall -Wextra -Werror
INCLUDES = includes/Zombie.hpp
SRC = src/Zombie.cpp src/zombieHorde.cpp src/main.cpp
RM = rm -rf

all: 
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	echo "Compilation done!"

clean:
	rm -rf $(NAME)
	echo "Clean done!"

fclean: 
	$(RM) $(NAME)
	echo "Fclean done!"

re: fclean all

.PHONY: all clean fclean re