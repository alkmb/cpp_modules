#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &rhs);
        Bureaucrat(std::string _name, int _grade);
        ~Bureaucrat();
        void getName();
        void increaseGrade(int sum);
        void decreaseGrade(int sum);
        int getGrade() const; 
};

#endif