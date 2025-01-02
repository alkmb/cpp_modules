NAME=easyfind
CC=c++
CFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS= src/main.cpp
INCLUDES= includes/easyfind.hpp
OBJS= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
