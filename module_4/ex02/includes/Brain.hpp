/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 04:23:20 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/25 04:24:29 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    private:
            std::string ideas[100];
    public:
            Brain();
            ~Brain();
            Brain(const Brain &src);
            Brain &operator=(const Brain &rhs);
};

#endif