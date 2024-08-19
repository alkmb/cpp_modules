#include "../includes/ScavTrap.hpp"


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


void	ScavTrap::attack()
{
	std::cout << "ScavTrap attacks." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << "is keeping the gate." << std::endl;
}