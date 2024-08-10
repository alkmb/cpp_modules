#include "../includes/Phonebook.hpp"

Phonebook::Phonebook(){_current = 0;_index = 0;};


void	Phonebook::add()
{
	Contact tmp;
	std::cout << "First Name: ";
	getline(std::cin, _firstName);
	tmp.setFirstName(_firstName);
	std::cout << "Last Name: ";
	getline(std::cin, _lastName);
	tmp.setLastName(_lastName);
	std::cout << "Nickename: ";
	getline(std::cin, _nickeName);
	tmp.setNickeName(_nickeName);
	std::cout << "Phone number: ";
	getline(std::cin, _phoneNumber);
	tmp.setPhoneNumber(_phoneNumber);
	std::cout << "Darkest Secret: ";
	getline(std::cin, _darkestSecret);
	tmp.setDarkestSecret(_darkestSecret);
	this->_contacts[_current % 8] = tmp;
	this->_current++;
	if (this->_current <= 8)
		this->_index = this->_current;
	std::cout << "Contact added" << std::endl;
}

std::string	resize(std::string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}

void	Phonebook::display()
{
	std::cout << "     Index|First Name| Last Name|  Nickname|\n";
	for (int i = 0; i < (int)this->_index; i++)
	{
		std::cout
		<< std::setw(10) << i
		<< std::setw(10) << resize(_contacts[i].getFirstName())
		<< std::setw(10) << resize(_contacts[i].getLastName())
		<< std::setw(10) << resize(_contacts[i].getNickeName()) << "|"
		<< std::endl;
	}
}

void	Phonebook::search()
{
	unsigned int index;
	display();
	std::cout << "Enter the index: ";
	std::cin >> index;
	if (std::cin.fail())
		std::cout << "Invalid Index\n";
	else
	{
		if (index < this->_index)
		{
			std::cout << "First Name: " << this->_contacts[index].getFirstName() << std::endl;
			std::cout << "Last Name: " << this->_contacts[index].getLastName() << std::endl;
			std::cout << "NickeName: " << this->_contacts[index].getNickeName() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
		}
		else
			std::cout << "Invalid Index\n";
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}
