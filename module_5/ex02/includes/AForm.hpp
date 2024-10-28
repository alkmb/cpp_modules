#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string _name;
        int _signGrade;
        int _execGrade;
        bool _isSigned;
    public:
        AForm();
        AForm(const std::string name, const int signGrade, const int execGrade);
        AForm(const AForm &src);
        AForm &operator=(const AForm &rhs);
        virtual ~AForm();

        std::string getName() const;
        virtual int getSignGrade() const = 0;
        virtual int getExecGrade() const = 0;
        virtual bool getIsSigned() const = 0;
        
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