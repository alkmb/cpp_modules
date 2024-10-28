#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm
{
    private:
        std::string _name;
        int _signGrade;
        int _execGrade;
        bool _isSigned;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string name, const int signGrade, const int execGrade);
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
        virtual ~ShrubberyCreationForm();

        std::string getName() const;
        virtual int getSignGrade() const;
        virtual int getExecGrade() const;
        virtual bool getIsSigned() const;
        
        virtual bool beSigned(const Bureaucrat &Bureaucrat) ;

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