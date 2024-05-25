/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:56:39 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/25 04:38:52 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
    std::cout << this->type << " constructor called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
}

Cat::~Cat( void )
{
    std::cout << this->type << " destructor called" << std::endl;
    delete  this->_brain;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}

Cat::Cat( const Cat& src ) : Animal( src )
{
    *this = src;
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "<Cat.cpp:32> Cat copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->_brain = new Brain( *src._brain );
    }
    return *this;
}