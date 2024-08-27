
#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(  ) : ClapTrap()
{
    this -> _name = "default";
    this -> _hitPoints = 100;
    this -> _energyPoints = 100;
    this -> _attackDamage = 30;
    
    std::cout << "FragTrap "<< this->_name << " is born" << std::endl;
}

FragTrap::FragTrap( std::string _name ) : ClapTrap(_name)
{
    this -> _hitPoints = 100;
    this -> _energyPoints = 100;
    this -> _attackDamage = 30;
    
    std::cout << "FragTrap "<< this->_name << " is born" << std::endl;

}

FragTrap::FragTrap( const FragTrap &src ) : ClapTrap(src)
{
    *this = src;
    std::cout << "copy constructor called and used " << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &rhs )
{
    std::cout << "copy assigment operator constructor called and used " << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_attackDamage = rhs._attackDamage;
        this->_hitPoints = rhs._hitPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap "<< this->_name << " is killed" << std::endl;
}

void	FragTrap::attack(const std::string& target)
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

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::takeDamage(unsigned int amount)
{
    int tmp = _hitPoints - amount;

    if (tmp < 0)
        _hitPoints = 0;
    else
        _hitPoints = tmp;

    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << _name << " has " << _hitPoints << " _hitPoints left" << std::endl;

}

void FragTrap::highFivesGuys()
{
    if (_energyPoints > 0)
    {   
        int tmp = _energyPoints - 1;

        if (tmp < 0)
            _energyPoints = 0;
        else
            _energyPoints = tmp;  
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