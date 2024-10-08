#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_scavName = "default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " + _scavName << " constructor called. he is drunk now" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_scavName = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " + name << " constructor called.he is drunk but now remembers his name" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &src) : ClapTrap(src)
{ 
    std::cout << "the copy constructor was called" << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &rhs) 
{ 
    std::cout << "the copy constructor was called i dunon man imagine this yourself" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_attackDamage = rhs._attackDamage;
        this->_hitPoints = rhs._hitPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " + _scavName + " has been destroyed. what a stupid subject rule" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        int tmp = _energyPoints - 1;

        if (tmp < 0)
            _energyPoints = 0;
        else
            _energyPoints = tmp;    
        std::cout << "ScavTrap " << _name << " attack with complete rage in his eyes " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        std::cout << "ScavTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ScavTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " not enough energy or hitpoints (dont care enough to separate it) to attack" << std::endl;
        std::cout << "ScavTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ScavTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }
}


void	ScavTrap::guardGate()
{
    if (_energyPoints > 0 && _hitPoints > 0)
       std::cout << this->_name << " is keeping the gate." << std::endl;
    else
        std::cout << this->_name << " cannot keep the gate." << std::endl;
}