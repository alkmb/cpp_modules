#include "../includes/Form.hpp"

Form::Form(std::string _name, int _grade)
{
    this->_name = _name;
    this->_grade = _grade;
    std::cout << "the object with name" << this->_name << " and grade " << this->_grade << " is created" << std::endl;
}

Form::~Form()
{
    std::cout << "the Form " << this->_name << "with grade " << this->_grade << std::endl;
}

void Form::getGrade()
{
    std::cout << "the grade of the Form " << this->_name << " is " << this->_grade << std::endl;
}

void Form ::getName()
{
    std::cout << "the name of the Form is " << this->_name << std::endl;
}

void Form::beSigned()
{
    if (this->_grade >= 150)
        GradeTooHighException();
    else if (this->_grade <= 0)
        GradeTooLowException();
    else
    {
        this->_signed = true;
        std::cout << this->_name << " is signed" << std::endl;
    }
}

void Form::GradeTooHighException()
{
    std::cout << this->_name << "cannot sign the Form because the grade is too high" << std::endl;
}

void Form::GradeTooLowException()
{
    std::cout << this->_name << "cannot sign the Form because the grade is too low" << std::endl;
}

void Form::increaseGrade(int sum)
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

void Form::decreaseGrade(int sum)
{
    this->_grade -= sum;
    if (this->_grade >= 150 || this->_grade <= 0)
    {
        this->_grade += sum;
        std::cout << this->_name << ": Could not decrease the grade. The current grade is " << this->_grade << std::endl;
    }
    else
        std::cout << this->_name << ": grade updated to " << this->_grade << " by subtracting " << sum << std::endl;
}