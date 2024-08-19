#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"

int main(void)
{
    FragTrap fragtrap( "manuel" );
    FragTrap fragtrap2( fragtrap );
    
    std::cout << "FragTrap test" << std::endl;

    // fragtrap test
    fragtrap.attack("target");
    fragtrap.attack("target");
    fragtrap.takeDamage(5);
    fragtrap.beRepaired(5);
    fragtrap.highFivesGuys();


    return 0;
}