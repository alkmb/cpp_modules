# include "../includes/HumanB.hpp"

HumanB::HumanB(std::string _name) : _name(_name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& _weapon)
{
    this->_weapon = &_weapon;
}

void HumanB::attack() const
{
    if (this->_weapon && this->_weapon->getType() != "")
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " no weapon, so no attack" << std::endl;
}