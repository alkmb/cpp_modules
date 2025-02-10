#include "../includes/Array.hpp"


int main( void )
{
    Array< int > intArray( 9 );

    for ( unsigned int i = 0; i < intArray.size(); i++ )
        intArray[i] = i;
    
    std::cout << "Array1: " << intArray << std::endl;


    try 
    {
        unsigned int sizeOfArray = 5;
        Array<char> charArray(sizeOfArray);

        charArray[0] = 'A';
        charArray[1] = 'B';
        charArray[2] = 'C';
        charArray[3] = 'D';
        charArray[4] = 'E';

        std::cout << "Char array: " << charArray << std::endl;

        std::cout << "in bounds: " << intArray[5] << std::endl;
        std::cout << "out of bounds: " << intArray[9] << std::endl;
        std::cout << "out of bounds: " << intArray[19] << std::endl;
    }
    catch ( Array< int >::OutOfBoundsException& e )
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return ( 0 );
}
