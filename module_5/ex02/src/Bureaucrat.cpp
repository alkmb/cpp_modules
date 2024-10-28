# include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    _name = "default";
    this->_grade = 150;
    std::cout << "the object with name" << this->_name << " and grade " << this->_grade << " is created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
    std::cout << "Copy constructor called for " << this -> _name << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    this -> _name = rhs._name;
    this -> _grade = rhs._grade;
    std::cout << "Called copy assigment operator function for " << this->_name << std::endl;
    return *this;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
{
    this->_name = _name;
    this->_grade = _grade;
    std::cout << "the object with name" << this->_name << " and grade " << this->_grade << " is created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "the Bureaucrat " << this->_name << " was destroyed " << std::endl;
}

int Bureaucrat::getGrade() const
{
    return this ->_grade;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Is not possible to get higher grade than 1.";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Is not possible to get lower grade than 150.";
}

void Bureaucrat::signForm(AForm &AForm)
{
    if (AForm.beSigned(*this))
    {
        std::cout << this->_name << " signed " << AForm.getName() << std::endl;
    }
    else
    {
        std::cout << std::endl;
    }
}

void Bureaucrat::increaseGrade()
{
    try
    {
        this->_grade -= 1;
        if (this->_grade > 150)
        {
            throw GradeTooLowException();
        }
        else if (this->_grade <= 0)
        {
            throw GradeTooHighException();
        }
        std::cout << this->_name << ": grade updated to " << this->_grade << " by adding " << 1 << std::endl;
    }
    catch (const GradeTooHighException &e) 
    {
        this->_grade += 1;
        std::cout << this->_name << ": Could not increase the grade. " << e.what() << " The current grade is " << this->_grade << std::endl;
    }
    catch (const GradeTooLowException &e) 
    {
        this->_grade += 1;
        std::cout << this->_name << ": Could not increase the grade. " << e.what() << " The current grade is " << this->_grade << std::endl;
    }
}

void Bureaucrat::decreaseGrade()
{
    try
    {
        this->_grade += 1;
        if (this->_grade > 150)
        {
            throw GradeTooLowException();
        }
        else if (this->_grade <= 0)
        {
            throw GradeTooHighException();
        }
        std::cout << this->_name << ": grade updated to " << this->_grade << " by subtracting " << 1 << std::endl;
    }
    catch (const GradeTooHighException &e) 
    {
        this->_grade -= 1;
        std::cout << this->_name << ": Could not decrease the grade. " << e.what() << " The current grade is " << this->_grade << std::endl;
    }
    catch (const GradeTooLowException &e) 
    {
        this->_grade -= 1;
        std::cout << this->_name << ": Could not decrease the grade. " << e.what() << " The current grade is " << this->_grade << std::endl;
    }
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs )
{
    o << rhs.getGrade();
    return o;
}