#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm
{
    private:
        const std::string _name;
        const int _signGrade;
        const int _execGrade;
        bool _isSigned;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(const std::string name, const int signGrade, const int execGrade);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
        virtual ~RobotomyRequestForm();

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