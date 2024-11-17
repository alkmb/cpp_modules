#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
private:
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

    virtual std::string getName() const;
    virtual int getSignGrade() const;
    virtual int getExecGrade() const;
    virtual bool getIsSigned() const;

    virtual bool beSigned(const Bureaucrat &bureaucrat);
    virtual void execute(const Bureaucrat &executor) const  = 0;

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