/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 07:59:04 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/21 10:37:08 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Claptrap");

    std::cout << "Energy test" << std::endl;
    // energy test
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");
    claptrap.attack("target");

    std::cout << std::endl;
    std::cout << "Repair and damage test" << std::endl;

    // repair and damage test

    claptrap.takeDamage(5);
    claptrap.beRepaired(5);

    


    return 0;
}