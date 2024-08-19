
#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main(void)
{
	std::string	robotNames[4] = 
    {"brrrrr", "pumba", "oleloscaracole", "samba"};
	ClapTrap drRobor(robotNames[3]);
	ScavTrap miniRobot(robotNames[0]);
	
	ClapTrap mrRobot(drRobor);
	
	drRobor.attack("elloco");
	
	miniRobot.attack();
	miniRobot.guardGate();

	ScavTrap manuel(miniRobot);


	return 0;
}