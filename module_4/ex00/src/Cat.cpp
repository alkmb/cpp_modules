
# include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called meow i guess" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called this is so sad it keeps hapening" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}