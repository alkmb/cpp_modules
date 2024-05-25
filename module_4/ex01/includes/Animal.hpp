/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:56:26 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/25 04:52:52 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string type;

public:
    Animal( void );
    Animal( std::string type );
    virtual ~Animal( void );
    Animal( const Animal& src );
    Animal& operator=( const Animal& rhs );
    virtual void    makeSound( void ) const;
    std::string     getType( void ) const; 
};

#endif