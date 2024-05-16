NAME = More_Useful
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = src/main.cpp src/Fixed.cpp
INCLUDES = includes/Fixed.hpp

all: $(NAME)

$(NAME): $(SRC) $(INCLUDES)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all