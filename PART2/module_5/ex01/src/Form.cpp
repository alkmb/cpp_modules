#include "../includes/Form.hpp"

Form::Form() : _name("default"), _signGrade(0), _execGrade(0), _isSigned(false)
{
    std::cout << "Default Constructor called."<< std::endl;
}

Form::Form(const std::string name, const int signGrade, const int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
    std::cout << "Constructor called."<< std::endl;
}

Form::Form(const Form &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade), _isSigned(src._isSigned) 
{
    std::cout << "Copy constructor called."<< std::endl;
}

Form& Form::operator=(const Form& rhs) 
{
    std::cout << "Copy assignment constructor called."<< std::endl;
    if (this != &rhs)
        this-> _isSigned = rhs._isSigned;
    return *this;
}

Form::~Form() 
{
    std::cout << "Destructor called."<< std::endl;
}

std::string Form::getName() const 
{
     return _name; 
}

int Form::getSignGrade() const
{
     return _signGrade;
    
}

int Form::getExecGrade() const 
{ 
    return _execGrade;
}

bool Form::getIsSigned() const 
{ 
    return _isSigned;
}

bool Form::beSigned(const Bureaucrat &Bureaucrat)
{
    try
    {
        if (Bureaucrat.getGrade() > this->_signGrade)
            throw GradeTooLowException();
        std::cout << "can be signed" << std::endl;
        this->_isSigned = true;
        return true;
    }
    catch (const GradeTooHighException &e) 
    {
        std::cout << this->_name << ": Could not sign the Form. " << e.what() << std::endl;
    }
    catch (const GradeTooLowException &e) 
    {
        std::cout << this->_name << ": Could not sign the Form. " << e.what() << std::endl;
    }
    return false;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

std::ostream & operator<<( std::ostream & o, Form const & rhs )
{
    o << rhs.getExecGrade();
    o << rhs.getSignGrade();
    o << rhs.getIsSigned();
    return o;
}