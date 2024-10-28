#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

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

    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getIsSigned() const;

    virtual bool beSigned(const Bureaucrat &bureaucrat);
    virtual void execute(const Bureaucrat &executor) const = 0;

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, const AForm &form);

#endif