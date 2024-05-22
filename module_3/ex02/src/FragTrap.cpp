/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 22:51:09 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/22 23:01:58 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this -> hitpoints = 100;
    this -> energyPoints = 100;
    this -> attackDamage = 30;
    
    std::cout << "FragTrap "<< this->name << " is born" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap "<< this->name << " is killed" << std::endl;
}

void FragTrap::highFivesGuys()
{
    energyPoints -= 1;
    if (energyPoints > 0)
    {
        std::cout << "FragTrap " << this->name << " high fives guys" << std::endl;
        std::cout << "FragTrap " << this->name << " has " << energyPoints << " energy points left" << std::endl;
        std::cout << "FragTrap " << this->name << " has " << hitpoints << " hitpoints left" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << this->name << " not enough energy to high five guys" << std::endl;
        std::cout << "FragTrap " << this->name << " has " << energyPoints << " energy points left" << std::endl;
        std::cout << "FragTrap " << this->name << " has " << hitpoints << " hitpoints left" << std::endl;
    }
}