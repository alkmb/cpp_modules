/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 04:06:11 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/25 04:52:38 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal( void ) : type( "Animel" )
{
    std::cout << this->type << " constructor called" << std::endl;
}

Animal::Animal( std::string type ) : type( type )
{
    std::cout << "Animal " << this->type << " constructor called" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal& src )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal& Animal::operator=( const Animal& rhs )
{
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->type = rhs.type;
    }
    return *this;
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string    Animal::getType( void ) const
{
    return this->type;
}
