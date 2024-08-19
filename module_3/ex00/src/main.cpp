#include "../includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Claptrap");

    std::cout << "Energy test" << std::endl;
    // energy test
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");

    std::cout << std::endl;
    std::cout << "Repair and damage test" << std::endl;

    // repair and damage test

    claptrap.takeDamage(5);
    claptrap.beRepaired(5);

    


    return 0;
}