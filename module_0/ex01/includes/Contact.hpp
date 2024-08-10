#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        std::string		_firstName;
        std::string		_lastName;
        std::string		_nickeName;
        std::string		_darkestSecret;
        std::string		_phoneNumber;
    public:
        Contact(){};
        ~Contact(){};
        std::string		getFirstName();
        std::string		getLastName();
        std::string		getNickeName();
        std::string		getDarkestSecret();
        std::string		getPhoneNumber();

        void  		setFirstName(std::string firstname);
        void  		setLastName(std::string lastname);
        void  		setNickeName(std::string nickename);
        void  		setDarkestSecret(std::string darkestsecret);
        void        setPhoneNumber(std::string phonenumber);
};

#endif