#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
    : _name(""), _signGrade(0), _execGrade(0), _isSigned(false)
{
    std::cout << "Default Constructor called."<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const int signGrade, const int execGrade)
    : _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
    std::cout << "Constructor called."<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
    : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade), _isSigned(src._isSigned) 
{
    std::cout << "Copy constructor called."<< std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) 
{
    std::cout << "Copy assignment constructor called."<< std::endl;
    if (this != &rhs)
        this-> _isSigned = rhs._isSigned;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
    std::cout << "Destructor called."<< std::endl;
}

std::string ShrubberyCreationForm::getName() const 
{
     return _name; 
}

int ShrubberyCreationForm::getSignGrade() const
{
     return _signGrade;
    
}

int ShrubberyCreationForm::getExecGrade() const 
{ 
    return _execGrade;
}

bool ShrubberyCreationForm::getIsSigned() const 
{ 
    return _isSigned;
}

bool ShrubberyCreationForm::beSigned(const Bureaucrat &Bureaucrat)
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
        std::cout << this->_name << ": Could not sign the ShrubberyCreationForm. " << e.what() << std::endl;
    }
    catch (const GradeTooLowException &e) 
    {
        std::cout << this->_name << ": Could not sign the ShrubberyCreationForm. " << e.what() << std::endl;
    }
    return false;
}

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char* ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

std::ostream & operator<<( std::ostream & o, ShrubberyCreationForm const & rhs )
{
    o << rhs.getExecGrade();
    o << rhs.getSignGrade();
    o << rhs.getIsSigned();
    return o;
}