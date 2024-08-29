#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
    std::string	_fragName;

  public:
    FragTrap();
    FragTrap( std::string name );
    FragTrap(const FragTrap &src);
    FragTrap &operator=(const FragTrap &rhs);
    ~FragTrap();
    void attack(const std::string& target);
    void highFivesGuys();
};

#endif