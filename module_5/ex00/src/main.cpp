# include "../includes/Bureaucrat.hpp"

int main() 
{
    Bureaucrat Bureauacrat1("John", 50);
    Bureaucrat Bureauacrat2("Jane", 75);
    Bureaucrat Bureauacrat3("Jim", 100);
    Bureaucrat Bureauacrat4("Jack", 25);
    Bureaucrat Bureauacrat5("Jill", 1);
    // GET GRADE
    std::cout << "Initial Grades: " << std::endl;
    std::cout << "Bureauacrat1: " << Bureauacrat1.getGrade() << std::endl;
    std::cout << "Bureauacrat2: " << Bureauacrat2.getGrade() << std::endl;
    std::cout << "Bureauacrat3: " << Bureauacrat3.getGrade() << std::endl;
    std::cout << "Bureauacrat4: " << Bureauacrat4.getGrade() << std::endl;
    std::cout << "Bureauacrat5: " << Bureauacrat5.getGrade() << std::endl;
    // PLAY WITH GRADE
    Bureauacrat1.increaseGrade(20);
    Bureauacrat1.increaseGrade(20);
    Bureauacrat1.increaseGrade(20);
    Bureauacrat2.increaseGrade(20);
    Bureauacrat1.decreaseGrade(20);
    Bureauacrat1.decreaseGrade(20);
    Bureauacrat1.decreaseGrade(20);

    // Test default constructor
    Bureaucrat BureauacratDefault;
    std::cout << "Default Bureaucrat grade: " << BureauacratDefault.getGrade() << std::endl;

    // Test copy constructor
    Bureaucrat BureauacratCopy(Bureauacrat1);
    std::cout << "Copy of Bureauacrat1 grade: " << BureauacratCopy.getGrade() << std::endl;

    // Test assignment operator
    Bureaucrat BureauacratAssigned = Bureauacrat2;
    std::cout << "Assigned Bureauacrat2 grade: " << BureauacratAssigned.getGrade() << std::endl;

    return 0;
}