# include "../includes/Bureaucrat.hpp"

int main ()
{
//SET OBJECTS
    Bureaucrat Bureauacrat1("corredor", 150);
    Bureaucrat Bureauacrat2("form", 87);
    Bureaucrat Bureauacrat3("office", 53);
    Bureaucrat Bureauacrat4("waiting queue", 120);
    Bureaucrat Bureauacrat5("corredor", 1);

//GET NAME

    Bureauacrat1.getName();
    Bureauacrat2.getName();
    Bureauacrat3.getName();
    Bureauacrat4.getName();

//GET GRADE
    Bureauacrat1.getGrade();
    Bureauacrat2.getGrade();
    Bureauacrat3.getGrade();
    Bureauacrat4.getGrade();

//PLAY WITH GRADE

    Bureauacrat1.increaseGrade(20);
    Bureauacrat1.increaseGrade(20);
    Bureauacrat1.increaseGrade(20);
    Bureauacrat2.increaseGrade(20);
    Bureauacrat1.decreaseGrade(20);
    Bureauacrat1.decreaseGrade(20);
    Bureauacrat1.decreaseGrade(20);
    Bureauacrat1.decreaseGrade(20);
    Bureauacrat1.decreaseGrade(20);
    Bureauacrat5.decreaseGrade(1);



    return 0;
}