#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        const int _signGrade;
        const int _execGrade;
        bool _isSigned;
    public:
        Form();
        Form(const std::string name, const int signGrade, const int execGrade);
        Form(const Form &src);
        Form &operator=(const Form &rhs);
        ~Form();

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