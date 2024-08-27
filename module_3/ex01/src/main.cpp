
#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
    ScavTrap Scavtrap("MAnuel");
    ScavTrap Scavtrap1;

    std::cout << "Energy test" << std::endl;
    // energy test-------------------------------
    for (int i = 0; i < 6; ++i) {
        Scavtrap.attack("target");
    }

    std::cout << std::endl;
    std::cout << "Repair and damage test" << std::endl;

    std::cout << "adding energypoints to objest for testing" << std::endl;
    // repair and damage test-------------------------
    Scavtrap.takeDamage(5);
    Scavtrap.beRepaired(5);
    Scavtrap.attack("target");

    std::cout << std::endl;
    std::cout << "Copy constructor test" << std::endl;

    // copy constructor test--------------------
    ScavTrap copyScavtrap(Scavtrap);
    copyScavtrap.attack("target_copy");
    copyScavtrap.takeDamage(3);
    copyScavtrap.beRepaired(3);


    for (int i = 0; i < 6; ++i) {
        Scavtrap1.attack("target");
    }

    std::cout << std::endl;
    std::cout << "Repair and damage test" << std::endl;

    std::cout << "adding energypoints to objest for testing" << std::endl;
    // repair and damage test
    Scavtrap1.takeDamage(5);
    Scavtrap1.beRepaired(5);
    Scavtrap1.attack("target");

    Scavtrap1.takeDamage(5);
    Scavtrap1.takeDamage(5);
    Scavtrap1.attack("target");
    
    Scavtrap1.beRepaired(5);
    Scavtrap1.attack("target");

    ScavTrap assigned = Scavtrap1;

    assigned.beRepaired(5);
    assigned.attack("copytarget");

    std::cout << std::endl;
    std::cout << "Copy constructor test" << std::endl;

    return 0;
}