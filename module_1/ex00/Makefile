# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:10:26 by kmb               #+#    #+#              #
#    Updated: 2024/02/28 16:12:40 by kmb              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Wextra -Werror -I includes -g
RM = rm -rf

SRCS = src/main.cpp src/Zombie.cpp src/newZombie.cpp \
src/randomChump.cpp
NAME = BraiiiiiiinnnzzzZ
HEADER = includes/Zombie.hpp

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
