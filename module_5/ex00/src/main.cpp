# include "../includes/Bureaucrat.hpp"

int main() 
{
    Bureaucrat Bureauacrat1("elmasloco", 160);

    // GET GRADE
    std::cout << std::endl << "Initial Grades: " << std::endl << std::endl;
    std::cout << "Bureauacrat1: " << Bureauacrat1.getGrade() << std::endl << std::endl;

    // PLAY WITH GRADE
    Bureauacrat1.increaseGrade(20);

    // Test default constructor
    Bureaucrat BureauacratDefault;
    std::cout << "Default Bureaucrat grade: " << BureauacratDefault.getGrade() << std::endl << std::endl;

    BureauacratDefault.decreaseGrade(1);
    BureauacratDefault.increaseGrade(151);

    BureauacratDefault.increaseGrade(100);
    BureauacratDefault.decreaseGrade(40);

    std::cout << "Default Bureaucrat grade: " << BureauacratDefault.getGrade() << std::endl << std::endl;

    // Test copy constructor
    Bureaucrat BureauacratCopy(BureauacratDefault);
    std::cout << "Copy of Default grade: " << BureauacratCopy.getGrade() << std::endl << std::endl;

    BureauacratCopy.increaseGrade(89);
    BureauacratCopy.increaseGrade(1);
    BureauacratCopy.decreaseGrade(150);
    BureauacratCopy.decreaseGrade(149);

    std::cout << "Default Bureaucrat grade: " << BureauacratDefault.getGrade() << std::endl;
    std::cout << "Copy of Default grade: " << BureauacratCopy.getGrade() << std::endl << std::endl;

    Bureaucrat BureauacratAssigned = Bureauacrat1;
    std::cout << "Assigned Bureauacrat2 grade: " << BureauacratAssigned.getGrade() << std::endl << std::endl;

    BureauacratAssigned.increaseGrade(29);

    std::cout << "Assigned Bureauacrat1 grade: " << BureauacratAssigned.getGrade() << std::endl;
    std::cout << "Bureauacrat1 grade: " << Bureauacrat1.getGrade() << std::endl << std::endl;

    return 0;
}