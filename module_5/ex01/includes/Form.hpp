#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form
{
    private:
        std::string const _name;
        bool _signed;
        int _grade;
        int const _gradeSign;
        int const _gradeExec;
    public:
        Form(std::string _name, int _grade);
        ~Form();
        void getName();
        void increaseGrade(int sum);
        void decreaseGrade(int sum);
        void getGrade();
        void beSigned();
        void GradeTooHighException();
        void GradeTooLowException(); 
};

#endif