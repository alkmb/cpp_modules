NAME= RPN
CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRCS=	src/main.cpp src/RPN.cpp
INCLUDES= includes/RPN.hpp
OBJS= $(SRCS:.o=.cpp)

all: $(NAME)

$(NAME) : $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
