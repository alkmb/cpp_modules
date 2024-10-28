# include "../includes/Bureaucrat.hpp"

int main() 
{
    Bureaucrat Bureauacrat1("elmasloco", 160);

    // GET GRADE
    std::cout << std::endl << "Initial Grades: " << std::endl << std::endl;
    std::cout << "Bureauacrat1: " << Bureauacrat1.getGrade() << std::endl << std::endl;

    // PLAY WITH GRADE
    Bureauacrat1.increaseGrade();

    // Test default constructor
    Bureaucrat BureauacratDefault;
    std::cout << "Default Bureaucrat grade: " << BureauacratDefault.getGrade() << std::endl << std::endl;

    BureauacratDefault.decreaseGrade();
    BureauacratDefault.increaseGrade();

    BureauacratDefault.increaseGrade();
    BureauacratDefault.decreaseGrade();

    std::cout << "Default Bureaucrat grade: " << BureauacratDefault.getGrade() << std::endl << std::endl;

    // Test copy constructor
    Bureaucrat BureauacratCopy(BureauacratDefault);
    std::cout << "Copy of Default grade: " << BureauacratCopy.getGrade() << std::endl << std::endl;

    BureauacratCopy.increaseGrade();
    BureauacratCopy.increaseGrade();
    BureauacratCopy.decreaseGrade();
    BureauacratCopy.decreaseGrade();

    std::cout << "Default Bureaucrat grade: " << BureauacratDefault.getGrade() << std::endl;
    std::cout << "Copy of Default grade: " << BureauacratCopy.getGrade() << std::endl << std::endl;

    Bureaucrat BureauacratAssigned = Bureauacrat1;
    std::cout << "Assigned Bureauacrat2 grade: " << BureauacratAssigned.getGrade() << std::endl << std::endl;

    BureauacratAssigned.increaseGrade();

    std::cout << "Assigned Bureauacrat1 grade: " << BureauacratAssigned.getGrade() << std::endl;
    std::cout << "Bureauacrat1 grade: " << Bureauacrat1.getGrade() << std::endl << std::endl;

    return 0;
}