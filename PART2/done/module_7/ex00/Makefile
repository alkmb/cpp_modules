NAME=SomeFuncs
CC=c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRCS= src/main.cpp
OBJS= $(SRCS:.cpp=.o)
INCLUDES= includes/whatever.hpp


all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	@echo "compiling..."
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "compiled"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "cleaning objects..."
	rm -rf $(OBJS)
	@echo "objects removed"

fclean: clean
	@echo "cleaning executable..."
	rm -rf $(NAME)
	@echo "executable removed"

re: fclean all
