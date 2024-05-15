/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wepon.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 01:24:01 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/16 01:40:27 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        const std::string& getType();
        void setType(std::string type);
};
#endif