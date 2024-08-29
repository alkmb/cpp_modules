#include "../includes/Contact.hpp"

std::string	Contact::getFirstName()
{
	return (this->_firstName);
}

std::string	Contact::getLastName()
{
	return (this->_lastName);
}

std::string	Contact::getNickeName()
{
	return (this->_nickeName);
}

std::string	Contact::getDarkestSecret()
{
	return (this->_darkestSecret);
}

std::string	Contact::getPhoneNumber()
{
	return (this->_phoneNumber);
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void Contact::setNickeName(std::string nickeName)
{
	this->_nickeName = nickeName;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}