#include "../includes/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("Robotomy", 72, 45)
{
    std::cout << "Default Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("Robotomy", 72, 45)

{
    this->_target = target;
    std::cout << "Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) 
: AForm(src)
{
    std::cout << "Copy constructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
        this->_target = rhs._target;
    }
    std::cout << "Copy assignment operator called." << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Destructor called." << std::endl;
}


void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    try 
    {
        if (executor.getGrade() > 45)
            throw GradeTooLowException();
        else if (!this->getIsSigned())
            return;
        std::srand(std::time(0));

        int randomValue = std::rand() % 2;
        if ( randomValue == 0)
            std::cout << "BZZZZZT! BZZZZZT! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
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

const char *RobotomyRequestForm::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

const char *RobotomyRequestForm::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs) {
    o << "Form: " << rhs.getName() << ", Sign Grade: " << rhs.getSignGrade()
      << ", Exec Grade: " << rhs.getExecGrade() << ", Signed: " << rhs.getIsSigned();
    return o;
}