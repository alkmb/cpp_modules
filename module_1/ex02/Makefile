NAME= HI_THIS_IS_BRAIN
CC= c++
CFLAGS= -Wall -Wextra -Werror
RM = rm -rf
SRCS= main.cpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADER) Makefile
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME) > /dev/null
	@echo "✅✅$(NAME) is ready!✅✅"

fclean: clean
	@$(RM) $(NAME) > /dev/null
	@echo "✅ Done cleaning up executables!"

clean:
	@$(RM) obj > /dev/null
	@echo "✅ Done cleaning up!"

re: fclean all
