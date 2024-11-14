#include "../includes/whatever.hpp"
#include <iostream>

int main (void)
{
    
    std::cout << "The min implemetation: " << min(5, 1) << std::endl;
    std::cout << "The max implementation: " << max(10, 4) << std::endl;

    int a = 5;
    int b = 4;

    std::cout << "Before the swap a: " << a << " b: " << b << std::endl;
    swap(a, b);
    std::cout << "After the swap a: " << a << " b: " << b << std::endl;

    return 0;
}