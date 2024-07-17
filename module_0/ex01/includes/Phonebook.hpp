#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include "Contact.hpp"
#include <climits>

class Phonebook
{
    private:
        Contact _contacts[8];
        unsigned int     _current;
        unsigned int     _index;
        std::string  _firstname;
        std::string  _lastname;
        std::string  _nickename;
		std::string	_darkestsecret;
		std::string	_phonenumber;
    public:
        Phonebook();
        ~Phonebook(){};
        void	add();
        void	search();
		void	display();
};

#endif