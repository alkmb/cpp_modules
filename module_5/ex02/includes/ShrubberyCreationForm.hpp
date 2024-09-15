#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm
{
    private:
        const std::string _name;
        const int _signGrade;
        const int _execGrade;
        bool _isSigned;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(const std::string name, const int signGrade, const int execGrade);
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
        virtual ~ShrubberyCreationForm();

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