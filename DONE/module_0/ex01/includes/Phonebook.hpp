#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include <climits>
# include "Contact.hpp"

class Phonebook
{
    private:
        Contact _contacts[8];
        unsigned int    _current;
        unsigned int    _index;
        std::string     _firstName;
        std::string     _lastName;
        std::string     _nickeName;
		std::string	    _darkestSecret;
		std::string	    _phoneNumber;
    public:
        Phonebook();
        ~Phonebook(){};
        void	add();
        void	search();
		void	display();
};

#endif