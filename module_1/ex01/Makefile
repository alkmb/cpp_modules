CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

NAME = Moar-Brainz!
SRCS = src/Zombie.cpp src/zombieHorde.cpp src/main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = includes/Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS) $(HEADER) Makefile
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "✅✅$(NAME) is ready!✅✅"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	@echo "Clening executable..."
	@$(RM) $(NAME)
	@echo "✅ Done cleaning up executables!"

clean:
	@echo "Clening objects..."
	@$(RM) $(OBJS)
	@echo "✅ Done cleaning up!"

re: fclean all
