#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat; // Forward declaration of Bureaucrat

class AForm {
protected:
    const std::string _name;
    const int _signGrade;
    const int _execGrade;
    bool _isSigned;

public:
    AForm();
    AForm(const std::string &name, int signGrade, int execGrade);
    AForm(const AForm &src);
    AForm &operator=(const AForm &rhs);
    virtual ~AForm();

    virtual std::string getName() const = 0;
    virtual int getSignGrade() const = 0;
    virtual int getExecGrade() const = 0;
    virtual bool getIsSigned() const = 0;

    virtual bool beSigned(const Bureaucrat &bureaucrat) = 0;

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

#endif