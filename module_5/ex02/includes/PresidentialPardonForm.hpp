#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm 
{
    private:
        std::string _target;
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &src);
       PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
        virtual ~PresidentialPardonForm();

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