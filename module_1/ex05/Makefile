# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 04:07:12 by kmb               #+#    #+#              #
#    Updated: 2024/03/25 04:08:06 by kmb              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Wextra -Werror -I includes -g -std=c++98 -fsanitize=address
RM = rm -rf
SRCS = $(wildcard src/*.cpp)
OBJS = $(patsubst src/%.cpp,obj/%.o,$(SRCS))
NAME = Harl
HEADER = includes/*.hpp

all: $(NAME)

$(NAME): $(OBJS) $(HEADER) Makefile
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) > /dev/null
	@echo "✅✅$(NAME) is ready!✅✅"

obj/%.o: src/%.cpp
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	@$(RM) $(NAME) > /dev/null
	@echo "✅ Done cleaning up executables!"

clean:
	@$(RM) obj > /dev/null
	@echo "✅ Done cleaning up!"

re: fclean all
