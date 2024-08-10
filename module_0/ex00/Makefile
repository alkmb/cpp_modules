CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

SRCS = MegaPhone.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Megaphone

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Comiling objects..."
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) is compiled and ready to execute."

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	@echo "Clening executable..."
	$(RM) $(NAME)
	@echo "Done cleaning up executable."

clean:
	@echo "Clening objects & executable..."
	$(RM) $(OBJS)
	@echo "Done cleaning objects & executable."

re: fclean all