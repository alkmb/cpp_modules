CC = c++
CFLAGS = -Wall -Wextra -Werror
NAME = ScavTrap
SRCS = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp 
OBJS = $(SRCS:.cpp=.o)
INCLUDES = includes/ClapTrap.hpp includes/ScavTrap.hpp

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) is ready to execute."

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning up objects..."
	$(RM) $(OBJS)
	@echo "Objects removed"

fclean: clean
	@echo "Cleaning up executable..."
	$(RM) $(NAME)
	@echo "Executable removed."

re: clean all