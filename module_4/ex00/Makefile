NAME = animal
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS= src/Animal.cpp src/Cat.cpp src/Dog.cpp src/main.cpp src/WrongAnimal.cpp src/WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDES = includes/Animal.hpp includes/Cat.hpp includes/Dog.hpp includes/WrongAnimal.hpp includes/WrongCat.hpp

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