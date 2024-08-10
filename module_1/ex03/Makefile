CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = Unnecesary-Violence

SRCS = src/HumanA.cpp src/HumanB.cpp src/main.cpp src/Weapon.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = includes/HumanA.hpp includes/HumanB.hpp includes/Weapon.hpp

all: $(NAME)

$(NAME): $(OBJS) $(HEADER) Makefile
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "✅✅$(NAME) is ready!✅✅"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	@echo "Clening executable..."
	$(RM) $(NAME)
	@echo "Done cleaning up executable."

clean:
	@echo "Clening objects..."
	$(RM) $(OBJS)
	@echo "Done cleaning objects."

re: fclean all