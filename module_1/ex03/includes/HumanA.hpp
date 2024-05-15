/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 01:23:56 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/16 01:51:20 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
#include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& weapon;
        HumanA();
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack();
};

#endif