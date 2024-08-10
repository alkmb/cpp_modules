CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = src/main.cpp src/Harl.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Harl
HEADER = includes/Harl.hpp

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