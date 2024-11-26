NAME=span
CC=c++
CFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS= src/main.cpp src/Span.cpp
OBJS=$(SRCS:.cpp=.o)
INCLUDES= includes/Span.hpp

all: $(NAME)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
