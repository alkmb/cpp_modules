# include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
    std::cout << "WrongAnimal constructed and type assigned" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal is destroied." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src )
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}
