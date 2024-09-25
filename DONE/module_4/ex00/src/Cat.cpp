
# include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called\
wiht fur." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called this \
without fur" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}