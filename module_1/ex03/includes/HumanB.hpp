/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 01:23:59 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/16 01:46:36 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon*    weapon;

    public:
        HumanB( std::string name );
        ~HumanB();

        void    attack( void ) const;
        void    setWeapon( Weapon& weapon );
};
#endif