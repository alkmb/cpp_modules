 h/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 07:59:02 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/21 10:35:25 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : name(name), hitpoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
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

void ClapTrap::beRepaired(unsigned int amount)
{
    hitpoints += amount;
    energyPoints -= 1;
    if (energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " repaired himeslf by" << amount << " points" << std::endl;
        std::cout << "ClapTrap " << name << " has " << energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << name << " has " << hitpoints << " hitpoints left" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " not enough energy to repair" << std::endl;
        std::cout << "ClapTrap " << name << " has " << energyPoints << " energy points left" << std::endl;
        std::cout << "ClapTrap " << name << " has " << hitpoints << " hitpoints left" << std::endl;
    }

}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitpoints -= amount;
    std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << name << " has " << hitpoints << " hitpoints left" << std::endl;

}