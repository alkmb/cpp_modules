/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:51:58 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/16 00:47:42 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>


class Zombie 
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void announce();
        Zombie* newZombie(std::string name);
        void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);
#endif