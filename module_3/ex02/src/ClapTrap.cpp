#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    this->_name = "default";
    std::cout << "ClapTrap " << this->_name << " constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructor called." << std::endl;
}
 
ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;
    std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
    if (this != &src) {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDamage = src._attackDamage;
    }
    std::cout << "ClapTrap copy assignment operator called." << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructor called." << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hitPoints left" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " not enough energy to attack" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hitPoints left" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0)
    {
        _hitPoints += amount;
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " repaired himeself by " << amount << " points" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hitPoints left" << std::endl;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " not enough energy to repair" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hitPoints left" << std::endl;
    }

}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount; 
    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hitPoints left" << std::endl;

}