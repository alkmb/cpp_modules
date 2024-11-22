NAME=Mutant
CC=c++
CFLAGS= -Wall -Wextra -Werror

SRCS= src/main.cpp 
INCLUDES= includes/MutantStack.hpp
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
