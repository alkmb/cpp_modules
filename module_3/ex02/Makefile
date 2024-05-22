CC = c++
CFLAGS = -Wall -Wextra -Werror
NAME = FragTrap
SRCS = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp
INC = includes/ClapTrap.hpp includes/ScavTrap.hpp includes/FragTrap.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp $(INC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
