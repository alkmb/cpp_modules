/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobmk <nobmk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:56:30 by nobmk             #+#    #+#             */
/*   Updated: 2024/05/25 04:28:35 by nobmk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
            Dog();
            ~Dog();
            Dog(const Dog &other);
            Dog &operator=(const Dog &other);
            void makeSound() const;
};

#endif