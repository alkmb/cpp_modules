
#include "../includes/FragTrap.hpp"

FragTrap::FragTrap( std::string _name ) : ClapTrap(_name)
{
    this -> _hitPoints = 100;
    this -> _energyPoints = 100;
    this -> _attackDamage = 30;
    
    std::cout << "FragTrap "<< this->_name << " is born" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap "<< this->_name << " is killed" << std::endl;
}

void FragTrap::highFivesGuys()
{
    _energyPoints -= 1;
    if (_energyPoints > 0)
    {
        std::cout << "FragTrap " << this->_name << " high fives guys" << std::endl;
        std::cout << "FragTrap " << this->_name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "FragTrap " << this->_name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << this->_name << " not enough energy to high five guys" << std::endl;
        std::cout << "FragTrap " << this->_name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "FragTrap " << this->_name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }
}