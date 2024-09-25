#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
# include "AAnimal.hpp"


class Cat : public AAnimal
{
private:
    Brain   *_brain;

public:
    Cat( void );
    ~Cat( void );
    Cat( const Cat& src );
    Cat& operator=( const Cat& src );
    void   makeSound( void ) const;
};

#endif