#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"

int main(void)
{
    FragTrap Fragtrap("MAnuel");
    FragTrap Fragtrap1;

    std::cout << "Energy test" << std::endl;
    // energy test-------------------------------
    for (int i = 0; i < 78; ++i) {
        Fragtrap.attack("target");
    }

    std::cout << std::endl;
    std::cout << "Repair and damage test" << std::endl;

    std::cout << "adding energypoints to objest for testing" << std::endl;
    // repair and damage test-------------------------
    Fragtrap.takeDamage(5);
    Fragtrap.beRepaired(5);
    Fragtrap.attack("target");
	Fragtrap.highFivesGuys();

    std::cout << std::endl;
    std::cout << "Copy constructor test" << std::endl;

    // copy constructor test--------------------
    FragTrap copyFragtrap(Fragtrap);
    copyFragtrap.attack("target_copy");
    copyFragtrap.takeDamage(30);
    copyFragtrap.beRepaired(30);
	copyFragtrap.highFivesGuys();

    for (int i = 0; i < 6; ++i) {
        Fragtrap1.attack("target");
    }

    std::cout << std::endl;
    std::cout << "Repair and damage test" << std::endl;

    std::cout << "adding energypoints to objest for testing" << std::endl;
    // repair and damage test
    Fragtrap1.takeDamage(5);
    Fragtrap1.beRepaired(5);
    Fragtrap1.attack("target");
	Fragtrap1.highFivesGuys();

    Fragtrap1.takeDamage(50);
    Fragtrap1.takeDamage(60);
    Fragtrap1.attack("target");
    
    Fragtrap1.beRepaired(5);
    Fragtrap1.attack("target");
	Fragtrap1.highFivesGuys();

    FragTrap assigned = Fragtrap1;

    assigned.beRepaired(5);
    assigned.attack("copytarget");
	Fragtrap1.highFivesGuys();
    return 0;
}