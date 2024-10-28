#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
{
    this->_name = "default";
    this->_signGrade = 25;
    this ->_execGrade = 5;
    this->_isSigned = false;
    std::cout << "Default Constructor called."<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name, const int signGrade, const int execGrade)
{
    this->_name = name;
    this->_signGrade = signGrade;
    this ->_execGrade = execGrade;
    this->_isSigned = false;
    if (this->_signGrade != 25)
        std::cout << "Be aware that if the Sign grade is not 25 you wont be able to sign the form." << std::endl;
    if (this->_execGrade != 5)
        std::cout << "Be aware that if the Exec grade is not 5 you wont be able to use the form." << std::endl;   
    std::cout << "Constructor called."<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
    *this = src;
    std::cout << "Copy constructor called."<< std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) 
{
    std::cout << "Copy assignment constructor called."<< std::endl;
    if (this != &rhs)
    {
        this-> _isSigned = rhs._isSigned;
        this->_execGrade = rhs._execGrade;
        this->_signGrade = rhs._signGrade;
        this->_isSigned = rhs._isSigned;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
    std::cout << "Destructor called."<< std::endl;
}

std::string PresidentialPardonForm::getName() const 
{
     return _name; 
}

int PresidentialPardonForm::getSignGrade() const
{
     return _signGrade;
    
}

int PresidentialPardonForm::getExecGrade() const 
{ 
    return _execGrade;
}

bool PresidentialPardonForm::getIsSigned() const 
{ 
    return _isSigned;
}

bool PresidentialPardonForm::beSigned(const Bureaucrat &Bureaucrat)
{
    try
    {
        if (Bureaucrat.getGrade() < 25)
            throw GradeTooLowException();
        else if (Bureaucrat.getGrade() > 25)
            throw GradeTooHighException();
        std::cout << "can be signed" << std::endl;
        this->_isSigned = true;
        return true;
    }
    catch (const GradeTooHighException &e) 
    {
        std::cout << this->_name << ": Could not sign the PresidentialPardonForm. " << e.what() << std::endl;
    }
    catch (const GradeTooLowException &e) 
    {
        std::cout << this->_name << ": Could not sign the PresidentialPardonForm. " << e.what() << std::endl;
    }
    return false;
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char* PresidentialPardonForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

std::ostream & operator<<( std::ostream & o, PresidentialPardonForm const & rhs )
{
    o << rhs.getExecGrade();
    o << rhs.getSignGrade();
    o << rhs.getIsSigned();
    return o;
}