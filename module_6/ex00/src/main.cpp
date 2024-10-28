#include "../includes/ScalarConverter.hpp"

int main (int argc, char** argv)
{
    if (argc > 2)
    {
        std::cout << "[Usage]: ./Converter {argument to be converted}" << std::endl;
        return 1;
    }
    else if (argc < 2)
    {
        std::cout << "[Usage]: ./Converter {argument to be converted}" << std::endl;
        return 1;
    }    
    ScalarConverter::convert(argv[1]);

    return 0;

}