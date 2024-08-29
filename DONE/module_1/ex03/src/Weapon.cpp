# include "../includes/Weapon.hpp"

Weapon::Weapon(std::string _type) : _type(_type)
{
}

const std::string& Weapon::getType()
{
    return (this->_type);
}

void Weapon::setType(std::string _type)
{
    this->_type = _type;
}