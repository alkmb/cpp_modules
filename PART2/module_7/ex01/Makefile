NAME=iter
CC=c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRCS= src/main.cpp
OBJS= $(SRCS:.cpp=.o)
INCLUDES= includes/iter.hpp

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

