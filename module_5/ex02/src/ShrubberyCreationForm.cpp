#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
{
    this->_name = "default";
    this->_signGrade = 145;
    this ->_execGrade = 137;
    this->_isSigned = false;
    std::cout << "Default Constructor called."<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const int signGrade, const int execGrade)
{
    this->_name = name;
    this->_signGrade = signGrade;
    this ->_execGrade = execGrade;
    this->_isSigned = false;
    if (this->_signGrade != 145)
        std::cout << "Be aware that if the Sign grade is not 145 you wont be able to sign the form." << std::endl;
    if (this->_execGrade != 137)
        std::cout << "Be aware that if the Exec grade is not 137 you wont be able to use the form." << std::endl; 
    std::cout << "Constructor called."<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
    *this = src;
    std::cout << "Copy constructor called."<< std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) 
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
        if (Bureaucrat.getGrade() < 145)
            throw GradeTooLowException();
        else if (Bureaucrat.getGrade() > 145)
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