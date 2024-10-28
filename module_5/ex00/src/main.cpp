# include "../includes/Bureaucrat.hpp"

int main() 
{
    Bureaucrat Bureauacrat1("elmasloco", 0);
    //Bureaucrat Bureauacrat1("elmasloco", 151);

    std::cout << "Bureauacrat1 grade is: " << Bureauacrat1.getGrade() << std::endl << std::endl;

    // PLAY WITH GRADE
    for (int i = 0; i < 32; i++)
            Bureauacrat1.increaseGrade();
    for (int i = 0; i < 33; i++)
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


    for (int i = 0; i < 30; i++)
            Bureauacrat1.increaseGrade();
    for (int i = 0; i < 12; i++)
            Bureauacrat1.decreaseGrade();

    std::cout << "Assigned Bureauacrat1 grade: " << BureauacratAssigned.getGrade() << std::endl;
    std::cout << "Bureauacrat1 grade: " << Bureauacrat1.getGrade() << std::endl;

    return 0;
}