NAME=array
CC=c++
CFLAGS= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRCS= src/main.cpp
INCLUDES= includes/Array.hpp
OBJS= $(SRCS:.cpp=.o)
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: fclean all
