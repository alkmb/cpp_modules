
# include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Constructor is being \
called" << std::endl;
}

Animal::Animal(std::string _type)
{
    this->_type = _type;
    std::cout << "Animal constructor is being called \
and its assigning type" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructo is being \
called" << std::endl;
}

Animal::Animal( const Animal& src )
{
    std::cout << "Animal copy constructor is being\
called" << std::endl;
    *this = src;
}

Animal& Animal::operator=( const Animal& rhs )
{
    std::cout << "Animal assignation operator is being \
called" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "Pammpara!" << std::endl;
}

