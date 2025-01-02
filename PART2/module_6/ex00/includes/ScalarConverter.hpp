#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <iomanip>


class ScalarConverter 
{

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &src);
        ScalarConverter &operator=(const ScalarConverter &rhs);
        ~ScalarConverter();
    public:
        static void convert(const std::string &literal);
};

#endif