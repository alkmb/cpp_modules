#include "../includes/Bureaucrat.hpp"

Intern::Intern()
{
    std::cout << "Default constructor for Intern calles" << std::endl;
}

Intern::Intern(const Intern &src)
{
    *this = src;
    std::cout << "Copy constructor for Intern called" << std::endl;
}

Intern &Intern::operator=(const Intern &rhs)
{
    if (this != &rhs) {
        std::cout << "Copy assigment operator called for intern" << std::endl;
    }
    return *this;
}

Intern::~Intern()
{
    std::cout << "Destructor for Intern called" << std::endl;
}

AForm* Intern::makeForm(const std::string &name, const std::string &target) {
    std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };

    for (int i = 0; i < 3; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << name << std::endl;
            switch (i) {
                case 0:
                    return new RobotomyRequestForm(target);
                case 1:
                    return new PresidentialPardonForm(target);
                case 2:
                    return new ShrubberyCreationForm(target);
            }
        }
    }

    std::cout << "Intern unable to create form: " << name << std::endl;
    return NULL;
}