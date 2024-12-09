#include "../includes/easyfind.hpp"
#include <iostream>
#include <vector>
int main()
{
    // Declare a vector of integers
    std::vector <int > vect;

    vect.push_back(1);
    vect.push_back(7);
    vect.push_back(2);
    vect.push_back(4);
    vect.push_back(19);
    vect.push_back(12);
    vect.push_back(31);


    easyfind(vect, 99);

    return 0;
}
