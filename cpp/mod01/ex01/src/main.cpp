/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:06:55 by kmb               #+#    #+#             */
/*   Updated: 2024/02/28 21:22:40 by kmb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void testZombieHorde(void)
{
	int N = 19;
	Zombie* horde = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; ++i)
	{
		horde[i].announce();
	}
	delete[] horde;
}
int main(void)
{
	testZombieHorde();
	return 0;
}
