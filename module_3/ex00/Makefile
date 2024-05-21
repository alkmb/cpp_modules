CC = c++
CFLAGS = -Wall -Wextra -Werror
NAME = ClapTrap
SRCS = src/main.cpp src/ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)
INC = ClapTrap.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)

clean:
	rm -f $(OBJS)

fclean: clean

re: fclean all
