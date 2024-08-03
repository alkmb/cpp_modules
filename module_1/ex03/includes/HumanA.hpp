#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
#include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& weapon;
        HumanA();
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack();
};

#endif