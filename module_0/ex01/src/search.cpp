/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:25:30 by kmb               #+#    #+#             */
/*   Updated: 2024/02/28 20:25:51 by kmb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

void	Phonebook::search()
{
	int i;
	std::string index;

	if (contact_count == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	i = 0;
	while (i < contact_count)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		if (contacts[i].first_name.length() > 10)
			std::cout << contacts[i].first_name.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contacts[i].first_name << "|";
		if (contacts[i].last_name.length() > 10)
			std::cout << contacts[i].last_name.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contacts[i].last_name << "|";
		if (contacts[i].nickname.length() > 10)
			std::cout << contacts[i].nickname.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contacts[i].nickname << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter index: ";
	std::getline(std::cin, index);
	if (index.length() == 1 && index[0] >= '1' && index[0] <= '8')
	{
		i = index[0] - '1';
		std::cout << "First name: " << contacts[i].first_name << std::endl;
		std::cout << "Last name: " << contacts[i].last_name << std::endl;
		std::cout << "Nickname: " << contacts[i].nickname << std::endl;
		std::cout << "Phone number: " << contacts[i].phone_number << std::endl;
		std::cout << "Darkest secret: " << contacts[i].darkest_secret << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}
