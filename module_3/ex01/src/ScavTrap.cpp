/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 01:58:35 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/22 22:35:01 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this -> hitpoints = 100;
    this -> energyPoints = 50;
    this -> attackDamage = 20;
    
    std::cout << "ScavTrap "<< this->name << " is created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap "<< this->name << " is destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    energyPoints -= 1;
    if (energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        std::cout << "ClapTrap " << name << " has " << energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << name << " has " << hitpoints << " hitpoints left" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " not enough energy to attack" << std::endl;
        std::cout << "ClapTrap " << name << " has " << energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << name << " has " << hitpoints << " hitpoints left" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode" << std::endl;
}

