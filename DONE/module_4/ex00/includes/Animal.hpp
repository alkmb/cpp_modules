
# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string type);
        Animal( const Animal& src );
        virtual ~Animal( void );
        Animal& operator=( const Animal& rhs );
        std::string     getType( void ) const; 
        virtual void    makeSound( void ) const;
};

#endif