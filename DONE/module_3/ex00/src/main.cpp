#include "../includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("MAnuel");
    ClapTrap claptrap1;

    std::cout << "Energy test" << std::endl;
    // energy test-------------------------------
    for (int i = 0; i < 6; ++i) {
        claptrap.attack("target");
    }

    std::cout << std::endl;
    std::cout << "Repair and damage test" << std::endl;

    std::cout << "adding energypoints to objest for testing" << std::endl;
    // repair and damage test-------------------------
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    claptrap.attack("target");

    std::cout << std::endl;
    std::cout << "Copy constructor test" << std::endl;

    // copy constructor test--------------------
    ClapTrap copyClaptrap(claptrap);
    copyClaptrap.attack("target_copy");
    copyClaptrap.takeDamage(3);
    copyClaptrap.beRepaired(3);


    for (int i = 0; i < 6; ++i) {
        claptrap1.attack("target");
    }

    std::cout << std::endl;
    std::cout << "Repair and damage test" << std::endl;

    std::cout << "adding energypoints to objest for testing" << std::endl;
    // repair and damage test
    claptrap1.takeDamage(5);
    claptrap1.beRepaired(5);
    claptrap1.attack("target");

    claptrap1.takeDamage(5);
    claptrap1.takeDamage(5);
    claptrap1.attack("target");
    
    claptrap1.beRepaired(5);
    claptrap1.attack("target");

    ClapTrap assigned = claptrap1;

    assigned.beRepaired(5);
    assigned.attack("copytarget");

    std::cout << std::endl;
    std::cout << "Copy constructor test" << std::endl;

    return 0;
}