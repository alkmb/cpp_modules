CC = clang++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
NAME = Megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "✅✅$(NAME) is ready!✅✅"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	$(RM) $(NAME)
	@echo "✅ Done cleaning up executables!"

clean:
	$(RM) $(OBJS)
	@echo "✅ Done cleaning up!"

re: fclean all