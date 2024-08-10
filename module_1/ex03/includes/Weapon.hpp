#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
# include <string>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string _type);
        const std::string& getType();
        void setType(std::string _type);
};
#endif