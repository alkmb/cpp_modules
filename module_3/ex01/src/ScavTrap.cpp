#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_scavName = "default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " + _scavName << " constructor called." << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_scavName = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " + name << " constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " + _scavName + " has been destroyed." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
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

void ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hitPoints left" << std::endl;

}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << "is keeping the gate." << std::endl;
}