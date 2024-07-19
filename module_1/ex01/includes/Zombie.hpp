# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>


class Zombie 
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void announce();
        Zombie* newZombie(std::string name);
        void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);
#endif