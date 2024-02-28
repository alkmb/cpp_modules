/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:06:58 by kmb               #+#    #+#             */
/*   Updated: 2024/02/28 16:33:29 by kmb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	Zombie_main(void)
{
	Zombie zombie;
	Zombie *zombie2;

	randomChump("Zombie1");
	zombie2 = newZombie("Zombie2");
	zombie2->announce();
}
