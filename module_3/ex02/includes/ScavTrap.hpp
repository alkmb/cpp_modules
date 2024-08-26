#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# include <string>
# include <iostream>

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
        void attack(const std::string& target);
		void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
		void	guardGate();
		void	attack();
	
	private:
		std::string	_scavName;
};

#endif