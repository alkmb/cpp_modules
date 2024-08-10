#include "../includes/Zombie.hpp"

int main( void ) 
{
    std::string name;

    std::cout << "zombie on the stack." << std::endl;
    std::cout << "name: ";
    std::cin >> name;

    Zombie zombi1(name);
    zombi1.announce();
    
    std::cout << "zombie on the heap." << std::endl;
    std::cout << "name: ";
    std::cin >> name;

    Zombie *zombi2 = newZombie(name);
    zombi2->announce();
    delete zombi2;

    std::cout << "Calling randomChump()." << std::endl;
    randomChump("randi");
    return 0;
}
