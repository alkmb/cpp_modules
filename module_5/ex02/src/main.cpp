# include "../includes/Bureaucrat.hpp"

int main() 
{
    Bureaucrat Bureauacrat1("elmasloco", 0);
    //Bureaucrat Bureauacrat1("elmasloco", 151);

    std::cout << "Bureauacrat1 grade is: " << Bureauacrat1.getGrade() << std::endl << std::endl;

    // PLAY WITH GRADE
    for (int i = 0; i < 5; i++)
            Bureauacrat1.increaseGrade();
    for (int i = 0; i < 3; i++)
            Bureauacrat1.decreaseGrade();
    std::cout << "Bureauacrat1 grade is: " << Bureauacrat1.getGrade() << std::endl;

    // Test default constructor
    Bureaucrat BureauacratDefault;
    std::cout << "Default Bureaucrat grade: " << BureauacratDefault.getGrade() << std::endl;

    for (int i = 0; i < 5; i++)
            Bureauacrat1.increaseGrade();
    for (int i = 0; i < 2; i++)
            Bureauacrat1.decreaseGrade();

    std::cout << "Default Bureaucrat grade: " << BureauacratDefault.getGrade() << std::endl;

    // Test copy constructor
    Bureaucrat BureauacratCopy(BureauacratDefault);
    std::cout << "\nCopy of Default grade: " << BureauacratCopy.getGrade() << std::endl;

    for (int i = 0; i < 2; i++)
            Bureauacrat1.increaseGrade();
    for (int i = 0; i < 2; i++)
            Bureauacrat1.decreaseGrade();

    std::cout << "Default Bureaucrat grade: " << BureauacratDefault.getGrade() << std::endl;
    std::cout << "Copy of Default grade: " << BureauacratCopy.getGrade() << std::endl;
    
    // Test copy assigment operator.
    Bureaucrat BureauacratAssigned = Bureauacrat1;
    std::cout << "Assigned Bureauacrat1 grade: " << BureauacratAssigned.getGrade() << std::endl;
    std::cout << "Bureauacrat1 grade: " << Bureauacrat1.getGrade() << std::endl;


    for (int i = 0; i < 2; i++)
            Bureauacrat1.increaseGrade();
    for (int i = 0; i < 12; i++)
            Bureauacrat1.decreaseGrade();

    std::cout << "Assigned Bureauacrat1 grade: " << BureauacratAssigned.getGrade() << std::endl;
    std::cout << "Bureauacrat1 grade: " << Bureauacrat1.getGrade() << std::endl;


// FORM Shrubbery TEST --------------------------------------------------------------------------------

    ShrubberyCreationForm form1("Shrubbery", 145, 137);
    // ShrubberyCreationForm form1("Shrubbery", 143, 133);


    Bureaucrat bureaucrat1("John Doe", 140);


    std::cout << form1.getName() << " created with grades: " << form1.getExecGrade() 
              << " | " << form1.getSignGrade() << std::endl;
    std::cout << "The form status is: " << form1.getIsSigned() << std::endl;

    bureaucrat1.signForm(form1);
    std::cout << "The form status is: " << form1.getIsSigned() << std::endl;

    for (int i = 0; i < 5; i++)
        bureaucrat1.decreaseGrade();

    bureaucrat1.signForm(form1);
    std::cout << "The form status is: " << form1.getIsSigned() << std::endl ;

// FORM Presidential TEST --------------------------------------------------------------------------------

    PresidentialPardonForm form2("Presidential", 25, 5);
    // PresidentialPardonForm form2("Presidential", 49, 12);

    Bureaucrat bureaucrat2("Marc Doe", 20);


    std::cout << form2.getName() << " created with grades: " << form2.getExecGrade() 
              << " | " << form2.getSignGrade() << std::endl;
    std::cout << "The form status is: " << form2.getIsSigned() << std::endl;

    bureaucrat2.signForm(form2);
    std::cout << "The form status is: " << form2.getIsSigned() << std::endl;

    for (int i = 0; i < 5; i++)
    bureaucrat2.decreaseGrade();

    bureaucrat2.signForm(form2);
    std::cout << "The form status is: " << form2.getIsSigned() << std::endl << std::endl;

// FORM Robotomy TEST --------------------------------------------------------------------------------

    RobotomyRequestForm form3("Robotomy", 72, 45);
    // RobotomyRequestForm form3("Robotomy", 42, 41);

    Bureaucrat bureaucrat3("John Doe", 40);


    std::cout << form3.getName() << " created with grades: " << form3.getExecGrade() 
              << " | " << form3.getSignGrade() << std::endl;
    std::cout << "The form status is: " << form3.getIsSigned() << std::endl;

    bureaucrat3.signForm(form3);
    std::cout << "The form status is: " << form3.getIsSigned() << std::endl;

    for (int i = 0; i < 32; i++)
        bureaucrat3.decreaseGrade();

    bureaucrat3.signForm(form3);
    std::cout << "The form status is: " << form3.getIsSigned() << std::endl << std::endl;


    return 0;
}