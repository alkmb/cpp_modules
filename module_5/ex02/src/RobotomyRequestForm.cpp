#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
: AForm("name", 72, 45)
{
    this->_isSigned = false;
    std::cout << "Default Constructor called."<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, const int signGrade, const int execGrade)
: AForm(name, signGrade, execGrade)
{
    this->_isSigned = false;
    if (this->_signGrade != 72)
        std::cout << "Be aware that if the Sign grade is not 72 you wont be able to sign the form." << std::endl;
    if (this->_execGrade != 45)
        std::cout << "Be aware that if the Exec grade is not 45 you wont be able to use the form." << std::endl; 
    std::cout << "Constructor called."<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
    : AForm(src._name, src._signGrade, src._execGrade)
{
    *this = src;
    std::cout << "Copy constructor called."<< std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) 
{
    std::cout << "Copy assignment constructor called."<< std::endl;
    if (this != &rhs)
        this-> _isSigned = rhs._isSigned;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
    std::cout << "Destructor called."<< std::endl;
}

std::string RobotomyRequestForm::getName() const 
{
     return _name; 
}

int RobotomyRequestForm::getSignGrade() const
{
     return _signGrade;
    
}

int RobotomyRequestForm::getExecGrade() const 
{ 
    return _execGrade;
}

bool RobotomyRequestForm::getIsSigned() const 
{ 
    return _isSigned;
}

bool RobotomyRequestForm::beSigned(const Bureaucrat &Bureaucrat)
{
    try
    {
        if (Bureaucrat.getGrade() > 72)
            throw GradeTooLowException();
        else if (Bureaucrat.getGrade() < 72)
            throw GradeTooHighException();
        std::cout << "can be signed" << std::endl;
        this->_isSigned = true;
        return true;
    }
    catch (const GradeTooHighException &e) 
    {
        std::cout << this->_name << ": Could not sign the RobotomyRequestForm. " << e.what() << std::endl;
    }
    catch (const GradeTooLowException &e) 
    {
        std::cout << this->_name << ": Could not sign the RobotomyRequestForm. " << e.what() << std::endl;
    }
    return false;
}

const char* RobotomyRequestForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char* RobotomyRequestForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}
