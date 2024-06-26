/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 07:59:04 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/22 22:43:26 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
    ScavTrap scavtrap( "manuel" );
    ScavTrap scavtrap2( scavtrap );
    
    std::cout << "ScavTrap test" << std::endl;

    // ScavTrap test
    scavtrap.attack("target");
    scavtrap.attack("target");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();
    

    


    return 0;
}