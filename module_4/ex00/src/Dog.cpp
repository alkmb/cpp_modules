
# include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called woof woof beatch" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called no way they killed a dog" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}