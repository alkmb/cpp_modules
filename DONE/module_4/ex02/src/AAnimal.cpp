#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal constructor is being called" << std::endl;
}

AAnimal::AAnimal(std::string _type) : _type(_type)
{
    this->_type = _type;
    std::cout << "AAnimal constructor called and its assigning _type" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor is being called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
    *this = src;
    std::cout << "AAnimal copy constructor is being called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    std::cout << "AAnimal assignment operator is being called" << std::endl;
    return *this;
}

std::string AAnimal::getType() const
{
    return this->_type;
}
