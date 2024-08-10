#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

# include "../includes/Bureaucrat.hpp"
# include "../includes/Form.hpp"

class Form
{
    private:
        std::string const _name;
        bool _signed;
        int const _gradeSign;
        int const _gradeExec;
    public:
        Form();
        ~Form();
        void getName();
        void getGrade();
        void beSigned();
        void GradeTooHighException();
        void GradeTooLowException(); 
};

#endif