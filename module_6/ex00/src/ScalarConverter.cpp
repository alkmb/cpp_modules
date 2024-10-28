#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
    *this = src;
    std::cout << "Copy constructior called " << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
    if (this != &rhs)
    {
        // No memeber to assign
    }
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Destructor has been called" << std::endl;
}

void ScalarConverter::convert(const std::string &literal)
{
    std::stringstream ss(literal);

    int intValue;
    float floatValue;
    double doubleValue;
    char charValue;

    if (literal == "-inff" || literal == "+inff" || literal == "nanf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << literal << std::endl;
        std::cout << "double: " << literal.substr(0, literal.size() - 1) << std::endl;
        return;
    }
    if (literal == "-inf" || literal == "+inf" || literal == "nan") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << literal << "f" << std::endl;
        std::cout << "double: " << literal << std::endl;
        return;
    }

    if (ss >> intValue)
        std::cout << "int: " << intValue << std::endl;
    else
        std::cout << "int: impossible" << std::endl;

    ss.clear();
    ss.str(literal);

    if (ss >> floatValue)
    {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << floatValue << "f" << std::endl;
    }    
    else
        std::cout << "float: impossible" << std::endl;

    ss.clear();
    ss.str(literal);

    if (ss >> doubleValue)
    {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "double: " << doubleValue << std::endl;
    }
    else
        std::cout << "double: impossible" << std::endl;
    ss.clear();
    ss.str(literal);

    if (ss >> intValue) {
        charValue = static_cast<char>(intValue);
        if (std::isprint(charValue)) 
            std::cout << "char: '" << charValue << "'" << std::endl;
        else 
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
}