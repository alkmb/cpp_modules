#include "../includes/AForm.hpp"

AForm::AForm() 
{
    this->_name = "default";
    this->_signGrade = 0;
    this->_execGrade = 0;
    this->_isSigned = false;}

AForm::AForm(std::string name, int signGrade, int execGrade)
{
    this->_name = name;
    this->_signGrade = signGrade;
    this->_execGrade = execGrade;
    this->_isSigned = false;
}

AForm::AForm(const AForm &src)
    : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade), _isSigned(src._isSigned) 
{
    std::cout << "Copy constructor called."<< std::endl;
}

AForm& AForm::operator=(const AForm& rhs) 
{
    std::cout << "Copy assignment constructor called."<< std::endl;
    if (this != &rhs)
        this-> _isSigned = rhs._isSigned;
    return *this;
}

AForm::~AForm() 
{
    std::cout << "Destructor called."<< std::endl;
}

std::string AForm::getName() const 
{
     return _name; 
}

int AForm::getSignGrade() const
{
     return _signGrade;
    
}

int AForm::getExecGrade() const 
{ 
    return _execGrade;
}

bool AForm::getIsSigned() const 
{ 
    return _isSigned;
}

bool AForm::beSigned(const Bureaucrat &Bureaucrat)
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
        std::cout << this->_name << ": Could not sign the AForm. " << e.what() << std::endl;
    }
    catch (const GradeTooLowException &e) 
    {
        std::cout << this->_name << ": Could not sign the AForm. " << e.what() << std::endl;
    }
    return false;
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

std::ostream & operator<<( std::ostream & o, AForm const & rhs )
{
    o << rhs.getExecGrade();
    o << rhs.getSignGrade();
    o << rhs.getIsSigned();
    return o;
}