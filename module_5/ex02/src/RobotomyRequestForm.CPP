#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
    : _name(""), _signGrade(0), _execGrade(0), _isSigned(false)
{
    std::cout << "Default Constructor called."<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, const int signGrade, const int execGrade)
    : _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
    std::cout << "Constructor called."<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
    : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade), _isSigned(src._isSigned) 
{
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
        if (Bureaucrat.getGrade() > this->_signGrade)
            throw GradeTooLowException();
        else if (Bureaucrat.getGrade() < this->_signGrade)
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

std::ostream & operator<<( std::ostream & o, RobotomyRequestForm const & rhs )
{
    o << rhs.getExecGrade();
    o << rhs.getSignGrade();
    o << rhs.getIsSigned();
    return o;
}