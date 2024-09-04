CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = src/main.cpp src/Contact.cpp src/PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = PhoneBook
HEADER = includes/Phonebook.hpp includes/Contact.hpp

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