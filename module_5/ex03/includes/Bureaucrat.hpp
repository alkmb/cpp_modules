#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


class AForm;

class Bureaucrat {
private:
    std::string _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &src);
    Bureaucrat &operator=(const Bureaucrat &rhs);
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();

    std::string getName() const;
    void increaseGrade();
    void signForm(AForm &form);
    void executeForm(const AForm &form);
    void decreaseGrade();
    int getGrade() const;

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