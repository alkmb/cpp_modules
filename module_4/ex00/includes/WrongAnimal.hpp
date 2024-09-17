
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#include "Animal.hpp"

class WrongAnimal
{
    private:
        std::string _type;

    public:
        WrongAnimal( void );
        WrongAnimal( std::string type );
        ~WrongAnimal( void );
        WrongAnimal( const WrongAnimal& src );
        WrongAnimal& operator=( const WrongAnimal& rhs );
        void            makeSound( void ) const;
        std::string     getType( void ) const; 
};

#endif