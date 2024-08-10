# include "../includes/Bureaucrat.hpp"
# include "../includes/Form.hpp"

int main ()
{
//SET OBJECTS
    Bureaucrat Bureauacrat1("corredor", 150);
    Bureaucrat Bureauacrat2("form", 87);
    Bureaucrat Bureauacrat5("corredor", 1);

//GET NAME

    Bureauacrat1.getName();
    Bureauacrat2.getName();

//GET GRADE
    Bureauacrat1.getGrade();
    Bureauacrat2.getGrade();
    Bureauacrat5.getGrade();

//PLAY WITH GRADE

    Bureauacrat2.increaseGrade(20);
    Bureauacrat1.decreaseGrade(20);
    Bureauacrat1.decreaseGrade(20);
    Bureauacrat5.decreaseGrade(1);

//Form testing
    return 0;
}