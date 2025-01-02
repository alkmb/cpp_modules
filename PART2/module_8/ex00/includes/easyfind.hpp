#include <iostream>
#include <algorithm>

template < typename T >
void    easyfind( T& container, int needle )
{
    if ( std::find( container.begin(), container.end(), needle ) != container.end() )
        std::cout << "Needle Found." << std::endl;
    else
        std::cout << "Needle Not found." << std::endl;
}
