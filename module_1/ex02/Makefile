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
