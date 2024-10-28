#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm
{
    private:
        std::string _name;
        int _signGrade;
        int _execGrade;
        bool _isSigned;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string name, const int signGrade, const int execGrade);
        PresidentialPardonForm(const PresidentialPardonForm &src);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
        virtual ~PresidentialPardonForm();

        std::string getName() const;
        virtual int getSignGrade() const;
        virtual int getExecGrade() const;
        virtual bool getIsSigned() const;
        
        virtual bool beSigned(const Bureaucrat &Bureaucrat);

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