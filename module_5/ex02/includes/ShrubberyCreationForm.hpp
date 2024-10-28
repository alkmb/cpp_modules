#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp" // Ensure AForm is included

class Bureaucrat; // Forward declaration of Bureaucrat

class ShrubberyCreationForm : public AForm 
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &name, int signGrade, int execGrade);
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
        virtual ~ShrubberyCreationForm();

        virtual std::string getName() const;
        virtual int getSignGrade() const;
        virtual int getExecGrade() const;
        virtual bool getIsSigned() const;

        virtual bool beSigned(const Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception {
        public:
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char *what() const throw();
        };
};

#endif