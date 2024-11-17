NAME= Intern
CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRCS= src/main.cpp src/Bureaucrat.cpp src/AForm.cpp src/ShrubberyCreationForm.cpp \
src/PresidentialPardonForm.cpp src/RobotomyRequestForm.cpp src/Intern.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDES= includes/Bureaucrat.hpp includes/AForm.hpp includes/ShrubberyCreationForm.hpp \
includes/PresidentialPardonForm.hpp includes/RobotomyRequestForm.hpp includes/Intern.hpp

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) is ready to execute."

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning up objects..."
	$(RM) $(OBJS)
	@echo "Objects removed"

fclean: clean
	@echo "Cleaning up executable..."
	$(RM) $(NAME)
	@echo "Executable removed."

re: clean all
