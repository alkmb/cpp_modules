/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 07:59:04 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/22 23:03:53 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"

int main(void)
{
    FragTrap fragtrap( "manuel" );
    FragTrap fragtrap2( fragtrap );
    
    std::cout << "FragTrap test" << std::endl;

    // fragtrap test
    fragtrap.attack("target");
    fragtrap.attack("target");
    fragtrap.takeDamage(5);
    fragtrap.beRepaired(5);
    fragtrap.highFivesGuys();
    

    


    return 0;
}