NAME = UNnecesary-Violence
CC = c++
SRC = src/HumanA.cpp src/HumanB.cpp src/main.cpp src/Weapon.cpp
INCLUDES = includes/HumanA.hpp includes/HumanB.hpp includes/Weapon.hpp
RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(INCLUDES)
	$(CC) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
