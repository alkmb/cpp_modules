NAME=easyfind
CC=c++
CFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS= src/main.cpp
INCLUDES= includes/easyfind.hpp
OBJS= $(SRCS:.cpp=.o)

all: $(NAME)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
