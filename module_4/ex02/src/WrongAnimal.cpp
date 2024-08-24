# include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::WrongAnimal( std::string _type )
{
    this->_type = _type;
    std::cout << "WrongAnimal constructed and _type assigned" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal is murdered." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src )
{
    std::cout << "WrongAnimal copy constructor function called" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "WrongAnimal assignation operator funtion called" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

