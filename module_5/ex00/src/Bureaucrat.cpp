# include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->_name = "default";
    this->_grade = 1;
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
    std::cout << "Called copy assigment operatorr function for " << this->_name << std::endl;
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
    std::cout << "the Bureaucrat " << this->_name << "with grade " << this->_grade << std::endl;
}

int Bureaucrat::getGrade() const
{
    return this ->_grade;
}

void Bureaucrat::increaseGrade(int sum)
{
    this->_grade += sum;
    if (this->_grade >= 150 || this->_grade <= 0)
    {
        this->_grade -= sum;
        std::cout << this->_name << ": Could not increase the grade. The current grade is " << this->_grade << std::endl;
    }
    else
        std::cout << this->_name << ": grade updated to " << this->_grade << " by adding " << sum << std::endl;
}

void Bureaucrat::decreaseGrade(int sum)
{
    this->_grade -= sum;
    if (this->_grade >= 150 || this->_grade <= 0)
    {
        this->_grade += sum;
        std::cout << this->_name << ": Could not decrease the grade. The current grade is " << this->_grade << std::endl;
    }
    else
        std::cout << this->_name << ": grade updated to " << this->_grade << " by extracting " << sum << std::endl;
}

void Bureaucrat::getName()
{
    std::cout << "the name of this Bureaucrat is " << this->_name << std::endl;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs )
{
    o << rhs.getGrade();
    return o;
}