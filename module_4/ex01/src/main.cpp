/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:01:41 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/25 04:40:16 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Cat.hpp"
# include "../includes/Dog.hpp"
# include "../includes/Animal.hpp"
# include "../includes/WrongCat.hpp"
# include "../includes/WrongAnimal.hpp"
# include "../includes/Brain.hpp"

int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    Dog basic;
    {
        Dog tmp = basic;
    }

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}