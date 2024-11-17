#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern &src);
    Intern &operator=(const Intern &rhs);
    ~Intern();

    AForm* makeForm(const std::string &name, const std::string &target);
};

#endif