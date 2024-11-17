#include "../includes/Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("Shrubbery", 145, 137)
{
    std::cout << "Default Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("Shrubbery", 145, 137)
{
    this->_target = target;
    std::cout << "Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) 
: AForm(src)
{
    std::cout << "Copy constructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
        this->_target = rhs._target;
    }
    std::cout << "Copy assignment operator called." << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor called." << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    try 
    {
        if (executor.getGrade() > 137)
            throw GradeTooHighException();
        else if (executor.getGrade() > 137)
            throw GradeTooLowException();
        else if (!this->getIsSigned())
            return;

        std::ofstream file(( this->getName() + "_shrubbery" ).c_str());
        file << "                      ___" << std::endl;
        file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
        file << "             ,-'          __,,-- \\" << std::endl;
        file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
        file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
        file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
        file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
        file << "     (     ,-'                  `." << std::endl;
        file << "      `._,'     _   _             ;" << std::endl;
        file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
        file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
        file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
        file << "                \"Hb HH dF" << std::endl;
        file << "                 \"HbHHdF" << std::endl;
        file << "                  |HHHF" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  dHHHb" << std::endl;
        file << "                .dFd|bHb.               o" << std::endl;
        file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
        file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__       Y" << std::endl;
        file << "##########################################" << std::endl;
        file.close();

        return;
    }
    catch (const GradeTooHighException &e)
    {
        std::cout << "Grade to high to execute" << std::endl;
    }
    catch (const GradeTooLowException &e)
    {
        std::cout << "Grade to low to execute" << std::endl;
    }
    return ;
}

const char *ShrubberyCreationForm::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

const char *ShrubberyCreationForm::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs) {
    o << "Form: " << rhs.getName() << ", Sign Grade: " << rhs.getSignGrade()
      << ", Exec Grade: " << rhs.getExecGrade() << ", Signed: " << rhs.getIsSigned();
    return o;
}