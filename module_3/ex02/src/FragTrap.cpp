
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

void	FragTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "ScavTrap " << _name << " attack with all his power " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        std::cout << "ScavTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ScavTrap " << _name << " has " << _hitPoints << " hitPoints left" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " not enough energy to attack" << std::endl;
        std::cout << "ScavTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ScavTrap " << _name << " has " << _hitPoints << " hitPoints left" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hitPoints left" << std::endl;

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