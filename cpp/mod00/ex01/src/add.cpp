/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:25:06 by kmb               #+#    #+#             */
/*   Updated: 2024/02/28 20:25:53 by kmb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/phonebook.hpp"
void	Phonebook::add()
{
	if (contact_count < 8)
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, contacts[contact_count].first_name);
		std::cout << "Enter last name: ";
		std::getline(std::cin, contacts[contact_count].last_name);
		std::cout << "Enter nickname: ";
		std::getline(std::cin, contacts[contact_count].nickname);
		std::cout << "Enter phone number: ";
		std::getline(std::cin, contacts[contact_count].phone_number);
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, contacts[contact_count].darkest_secret);
		contact_count++;
	}
	else
		std::cout << "Phonebook is full" << std::endl;
}

