# include "../includes/Bureaucrat.hpp"
# include "../includes/Form.hpp"

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

void Bureaucrat::getGrade()
{
    std::cout << "the grade of the Bureucrat " << this->_name << " is " << this->_grade << std::endl;
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