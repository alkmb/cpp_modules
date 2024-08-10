#include <iostream>
#include <string.h>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "Pointer addres: " << &ptr << std::endl;
    std::cout << "Reference address: " << &ref << std::endl;
    std::cout << "String address: " << &str << std::endl;
    std::cout <<std::endl;
    std::cout << "Pointer value: " << *ptr << std::endl;
    std::cout << "Reference value: " << ref << std::endl;
    std::cout << "String value: " << str << std::endl;
    return 0;
}