#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
        protected:
            std::string _type;
            AAnimal( void );

        public:
            AAnimal( std::string type );
            virtual ~AAnimal( void );
            AAnimal( const AAnimal& src );
            AAnimal& operator=( const AAnimal& rhs );
            virtual void    makeSound( void ) const = 0;
            std::string     getType( void ) const; 
};

#endif
