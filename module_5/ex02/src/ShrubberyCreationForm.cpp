#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("Shrubbery", 145, 137)
{
    this->_isSigned = false;
    std::cout << "Default Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name, int signGrade, int execGrade)
    : AForm(name, signGrade, execGrade)
{
    this->_isSigned = false;
    if (this->_signGrade != 145)
        std::cout << "Be aware that if the Sign grade is not 72 you won't be able to sign the form." << std::endl;
    if (this->_execGrade != 137)
        std::cout << "Be aware that if the Exec grade is not 45 you won't be able to use the form." << std::endl;
    std::cout << "Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
    : AForm(src._name, src._signGrade, src._execGrade)
{
    *this = src;
    std::cout << "Copy constructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    if (this != &rhs) {
        this->_isSigned = rhs._isSigned;
    }
    std::cout << "Copy assignment operator called." << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor called." << std::endl;
}

std::string ShrubberyCreationForm::getName() const {
    return this->_name;
}

int ShrubberyCreationForm::getSignGrade() const {
    return this->_signGrade;
}

int ShrubberyCreationForm::getExecGrade() const {
    return this->_execGrade;
}

bool ShrubberyCreationForm::getIsSigned() const {
    return this->_isSigned;
}

bool ShrubberyCreationForm::beSigned(const Bureaucrat &bureaucrat) {
    try {
        if (bureaucrat.getGrade() > this->_signGrade)
            throw GradeTooLowException();
        else if (bureaucrat.getGrade() < this->_signGrade)
            throw GradeTooHighException();
        std::cout << "can be signed" << std::endl;
        this->_isSigned = true;
        return true;
    } catch (const GradeTooHighException &e) {
        std::cout << this->_name << ": Could not sign the ShrubberyCreationForm. " << e.what() << std::endl;
    } catch (const GradeTooLowException &e) {
        std::cout << this->_name << ": Could not sign the ShrubberyCreationForm. " << e.what() << std::endl;
    }
    return false;
}

const char *ShrubberyCreationForm::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

const char *ShrubberyCreationForm::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs) {
    o << "Form: " << rhs.getName() << ", Sign Grade: " << rhs.getSignGrade()
      << ", Exec Grade: " << rhs.getExecGrade() << ", Signed: " << rhs.getIsSigned();
    return o;
}