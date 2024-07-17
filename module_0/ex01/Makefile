CC = g++
CFLAGS = -Wall -Wextra -Werror -I includes -g
RM = rm -rf

SRCS = src/main.cpp src/Contact.cpp
NAME = PhoneBook
HEADER = includes/Phonebook.hpp includes/Contact.hpp

all: $(NAME)

$(NAME): $(OBJS) $(HEADER) Makefile
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "✅✅$(NAME) is ready!✅✅"

fclean: clean
	@$(RM) $(NAME)
	@echo "✅ Done cleaning up executables!"

clean:
	@$(RM) obj
	echo "✅ Done cleaning up!"

re: fclean all
