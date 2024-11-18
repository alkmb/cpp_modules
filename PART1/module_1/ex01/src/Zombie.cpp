# include "../includes/Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie is born" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie is dead" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string _name)
{
    this->_name = _name;
}