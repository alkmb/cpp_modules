#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        const int _signGrade;
        const int _execGrade;
        bool _isSigned;
        AForm();
    public:
        AForm(const std::string name, const int signGrade, const int execGrade);
        AForm(const AForm &src);
        AForm &operator=(const AForm &rhs);
        virtual ~AForm();

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