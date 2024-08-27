#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	private:
		std::string	_scavName;
	
	public:
		ScavTrap();
        ScavTrap(const ScavTrap &src);
		ScavTrap &operator=(const ScavTrap &src);
		ScavTrap(std::string name);
		~ScavTrap();
        void attack(const std::string& target);
		void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
		void	guardGate();
};

#endif