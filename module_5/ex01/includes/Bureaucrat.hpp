#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &rhs);
        Bureaucrat(std::string _name, int _grade);
        ~Bureaucrat();
        void increaseGrade(int sum);
        void signForm(Form &Form);
        void decreaseGrade(int sum);
        int getGrade() const;
        const std::string& getName() const;

        class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();	
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif