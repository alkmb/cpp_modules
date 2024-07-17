#include "../includes/Phonebook.hpp"

Phonebook::Phonebook(){_current = 0;_index = 0;};


void	Phonebook::add()
{
	Contact tmp;
	std::cout << "First Name: ";
	getline(std::cin, _firstname);
	tmp.set_first_name(_firstname);
	std::cout << "Last Name: ";
	getline(std::cin, _lastname);
	tmp.set_last_name(_lastname);
	std::cout << "Nickename: ";
	getline(std::cin, _nickename);
	tmp.set_nicke_name(_nickename);
	std::cout << "Phone number: ";
	getline(std::cin, _phonenumber);
	tmp.set_phone_number(_phonenumber);
	std::cout << "Darkest Secret: ";
	getline(std::cin, _darkestsecret);
	tmp.set_darkest_secret(_darkestsecret);
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
		<< std::setw(10) << resize(_contacts[i].get_first_name())
		<< std::setw(10) << resize(_contacts[i].get_last_name())
		<< std::setw(10) << resize(_contacts[i].get_nicke_name()) << "|"
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
			std::cout << "First Name: " << this->_contacts[index].get_first_name() << std::endl;
			std::cout << "Last Name: " << this->_contacts[index].get_last_name() << std::endl;
			std::cout << "NickeName: " << this->_contacts[index].get_nicke_name() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[index].get_phone_number() << std::endl;
			std::cout << "Darkest Secret: " << this->_contacts[index].get_darkest_secret() << std::endl;
		}
		else
			std::cout << "Invalid Index\n";
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}

int main()
{
    Phonebook Phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter command: ";
        getline(std::cin, command);
        if (command == "ADD")
            Phonebook.add();
        else if (command == "SEARCH")
			Phonebook.search();
        else if (command == "EXIT")
			break;
        else
            std::cout << "Invalid Command" << std::endl;
    }
}