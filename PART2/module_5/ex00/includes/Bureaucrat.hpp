#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &rhs);
        Bureaucrat(std::string _name, int _grade);
        ~Bureaucrat();
        std::string getName();
        void increaseGrade();
        void decreaseGrade();
        int getGrade() const;

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
