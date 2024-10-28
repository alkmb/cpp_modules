#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm 
{
    private:
        std::string _target;
        RobotomyRequestForm();

    public:
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
        virtual ~RobotomyRequestForm();

        virtual void execute(const Bureaucrat &executor) const;

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