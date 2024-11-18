NAME = Now_we_are_talking
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = src/main.cpp src/Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDES = includes/Fixed.hpp

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