#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string name, const int signGrade, const int execGrade);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
        virtual ~RobotomyRequestForm();

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