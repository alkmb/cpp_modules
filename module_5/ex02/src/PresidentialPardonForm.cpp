#include "../includes/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("Presidential", 25, 5)
{
    std::cout << "Default Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm("Presidential", 25, 5)

{
    this->_target = target;
    std::cout << "Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) 
: AForm(src)
{
    std::cout << "Copy constructor called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
        this->_target = rhs._target;
    }
    std::cout << "Copy assignment operator called." << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Destructor called." << std::endl;
}


void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    try 
    {
        if (executor.getGrade() > 5)
            throw GradeTooHighException();
        else if (executor.getGrade() > 5)
            throw GradeTooLowException();
        else if (!this->getIsSigned())
            return;
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
        return;
    }
    catch (const GradeTooHighException &e)
    {
        std::cout << "Grade to high to execute" << std::endl;
    }
    catch (const GradeTooLowException &e)
    {
        std::cout << "Grade to low to execute" << std::endl;
    }
    return ;
}

const char *PresidentialPardonForm::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

const char *PresidentialPardonForm::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs) {
    o << "Form: " << rhs.getName() << ", Sign Grade: " << rhs.getSignGrade()
      << ", Exec Grade: " << rhs.getExecGrade() << ", Signed: " << rhs.getIsSigned();
    return o;
}