#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_name = "default";
    std::cout << "ClapTrap " << _name << " is created with the default constructor" << std::endl;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap( std::string &name )
{
    this->_name = name;
    std::cout << "ClapTrap " << _name << " is created and has a name asigned" << std::endl;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &src)
{
    *this = src;
    std::cout << "Copy constructror called omg so cool" << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Copy assignment operator called please end this suffering now" << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destroyed (they hit the northside tower) 0_0" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        int tmp = _energyPoints - 1;

        if (tmp < 0)
            _energyPoints = 0;
        else
            _energyPoints = tmp;    
        std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " not enough energy or hitpoints (dont care enough to separate it) to attack" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _hitPoints += amount;
        int tmp = _energyPoints - 1;

        if (tmp < 0)
            _energyPoints = 0;
        else
            _energyPoints = tmp;        
        std::cout << "ClapTrap " << _name << " repaired himeself by " << amount << " points" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " not enough energy to repair" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;
    }


}

void ClapTrap::takeDamage(unsigned int amount)
{

    int tmp = _hitPoints - amount;

    if (tmp < 0)
        _hitPoints = 0;
    else
        _hitPoints = tmp;

    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;

}