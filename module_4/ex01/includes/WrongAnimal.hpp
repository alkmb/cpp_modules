/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 03:58:12 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/25 03:59:08 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#include "Animal.hpp"

class WrongAnimal
{
protected:
    std::string type;

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