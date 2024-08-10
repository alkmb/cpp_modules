# include "../includes/Bureaucrat.hpp"
# include "../includes/Form.hpp"

Form::Form(std::string _name, bool _signed,int  _gradeSign, int _gradeExec)
{

    this->_name = _name;
    this->_signed = _signed;
    this->_gradeExec = _gradeExec;
    this->_gradeSign = _gradeSign;
    std::cout << "Form" << this->_name << "created with grades; " << "Sign: " << this-_gradeSign << "Exec: " << this->_gradeExec << std::endl;
}

Form::~Form() 
{}
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
    if (this->_gradeSign >= 150)
        GradeTooHighException();
    else if (this->_gradeSign <= 0)
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
