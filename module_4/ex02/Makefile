NAME = Brain
CC = c++
CFLAGS = -Wall -Werror -Wextra
SRC = src/Animal.cpp src/Cat.cpp src/Dog.cpp src/main.cpp src/WrongAnimal.cpp src/WrongCat.cpp src/Brain.cpp
INC = /include/Animal.hpp /include/Cat.hpp /include/Dog.hpp /include/WrongAnimal.hpp /include/WrongCat.hpp /include/Brain.hpp
 
all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
