NAME=Selector
CC=c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRCS= main.cpp
OBJS= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) is ready to execute."

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all