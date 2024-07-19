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
SRCS = src/Zombie.cpp src/zombieHorde.cpp src/main.cpp
RM = rm -rf

all: $(NAME)

$(NAME): $(SRCS) $(HEADER) Makefile
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME) > /dev/null
	@echo "✅✅$(NAME) is ready!✅✅"

fclean: clean
	@$(RM) $(NAME) > /dev/null
	@echo "✅ Done cleaning up executables!"

clean:
	@$(RM) obj > /dev/null
	@echo "✅ Done cleaning up!"

re: fclean all
