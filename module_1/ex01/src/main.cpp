/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:53:25 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/16 00:53:22 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Zombie.hpp"

int main (void)
{
    int N = 5;

    Zombie *horde = zombieHorde(N, "Zombie");

    for (int i = 0; i < N; i++)
        horde[i].announce();

    delete [] horde;
    return 0;
}