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

// FORM TEST --------------------------------------------------------------------------------
    Form Form2("oleole", 90, 50); 

    std::cout << Form2.getName() << " Creatd with grades: " << Form2.getExecGrade() 
    << " | " << Form2.getSignGrade() << std::endl;

    std::cout << "The form status is: " << Form2.getIsSigned() << std::endl;
    std::cout << "\nCopy of Default grade: " << BureauacratCopy.getGrade() << std::endl;

    BureauacratCopy.signForm(Form2);
    for (int i = 0; i < 68; i++)
            BureauacratCopy.increaseGrade();
    BureauacratCopy.signForm(Form2);

    std::cout << "\nCopy of Default grade: " << BureauacratCopy.getGrade() << std::endl;
    std::cout << "The form status is: " << Form2.getIsSigned() << std::endl;

// FORM COPY TEST --------------------------------------------------------------------------------

    Form Form1(Form2);

    std::cout << Form1.getName() << " Creatd with grades: " << Form1.getExecGrade() 
    << " | " << Form1.getSignGrade() << std::endl;
    std::cout << "The form status is: " << Form1.getIsSigned() << std::endl;


    return 0;
}