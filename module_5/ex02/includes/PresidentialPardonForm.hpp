#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm
{
    private:
        const std::string _name;
        const int _signGrade;
        const int _execGrade;
        bool _isSigned;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(const std::string name, const int signGrade, const int execGrade);
        PresidentialPardonForm(const PresidentialPardonForm &src);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
        virtual ~PresidentialPardonForm();

        std::string getName() const;
        int getSignGrade() const;
        int getExecGrade() const;
        bool getIsSigned() const;
        
        bool beSigned(const Bureaucrat &Bureaucrat);

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif