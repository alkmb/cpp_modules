#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signGrade(0), _execGrade(0), _isSigned(false) {
    std::cout << "Form default constructor called." << std::endl;
}

AForm::AForm(const std::string &name, int signGrade, int execGrade)
    : _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false) {
    std::cout << "Constructor called." << std::endl;
}

AForm::AForm(const AForm &src)
    : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade), _isSigned(src._isSigned) {
    std::cout << "Copy constructor called." << std::endl;
}

AForm &AForm::operator=(const AForm &rhs) {
    if (this != &rhs) {
        this->_isSigned = rhs._isSigned;
    }
    std::cout << "Copy assignment operator called." << std::endl;
    return *this;
}

AForm::~AForm() {
    std::cout << "Destructor called." << std::endl;
}

std::string AForm::getName() const {
    return this->_name;
}

int AForm::getSignGrade() const {
    return this->_signGrade;
}

int AForm::getExecGrade() const {
    return this->_execGrade;
}

bool AForm::getIsSigned() const {
    return this->_isSigned;
}

bool AForm::beSigned(const Bureaucrat &bureaucrat) {
    try {
        if (bureaucrat.getGrade() > this->_signGrade)
            throw GradeTooLowException();
        std::cout << "can be signed" << std::endl;
        this->_isSigned = true;
        return true;
    } catch (const GradeTooHighException &e) {
        std::cout << this->_name << ": Could not sign the AForm. " << e.what() << std::endl;
    } catch (const GradeTooLowException &e) {
        std::cout << this->_name << ": Could not sign the AForm. " << e.what() << std::endl;
    }
    return false;
}

void AForm::execute(const Bureaucrat &executor) const {
    try {
        if (executor.getGrade() > this->_execGrade)
            throw GradeTooLowException();
        std::cout << "Can be Executed." << std::endl;
        return;
    } catch (const GradeTooHighException &e) {

    } catch (const GradeTooLowException &e) {

    }
    return;
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

std::ostream &operator<<(std::ostream &o, const AForm &form) {
    o << "Form: " << form.getName() << ", Sign Grade: " << form.getSignGrade()
      << ", Exec Grade: " << form.getExecGrade() << ", Signed: " << form.getIsSigned();
    return o;
}