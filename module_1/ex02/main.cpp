#include <iostream>
#include <string.h>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "Pointer_addres: " << &ptr << std::endl;
    std::cout << "Reference_address: " << &ref << std::endl;
    std::cout << "String_address: " << &str << std::endl;
    std::cout <<std::endl;
    std::cout << "Pointer_value: " << *ptr << std::endl;
    std::cout << "Reference_value: " << ref << std::endl;
    std::cout << "String_value: " << str << std::endl;
    return 0;
}