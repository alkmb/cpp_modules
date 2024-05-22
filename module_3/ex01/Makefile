CC = c++
CFLAGS = -Wall -Wextra -Werror
NAME = ScavTrap
SRCS = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp 
INC = includes/ClapTrap.hpp includes/ScavTrap.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp $(INC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
