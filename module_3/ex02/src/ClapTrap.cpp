
#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( std::string &_name ) : _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap " << _name << " is copied with copy constructor" << std::endl;
    return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "ClapTrap " << _name << " is copied with assignation operator" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    _energyPoints -= 1;
    if (_energyPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacking his enemy " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " not enough energy to attack" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    _energyPoints -= 1;
    if (_energyPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " repaired himeslf by" << amount << " points" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " not enough energy to repair" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }

}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;

}