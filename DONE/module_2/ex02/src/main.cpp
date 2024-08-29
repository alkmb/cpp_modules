#include "../includes/Fixed.hpp"

int main(void)
{
    // Default Constructor
    Fixed a;
    std::cout << "Initial value of a: " << a << std::endl;

    // Integer and Float Constructors
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const c( 10 );
    Fixed const d( 42.42f );

    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;

    // Increment and Decrement Operators
    std::cout << "Increment and Decrement:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a after a++: " << a << std::endl;
    std::cout << "--a: " << --a << std::endl;
    std::cout << "a--: " << a-- << std::endl;
    std::cout << "a after a--: " << a << std::endl;

    // Arithmetic Operators
    std::cout << "Arithmetic Operations:" << std::endl;
    std::cout << "a + b: " << a + b << std::endl;
    std::cout << "a - b: " << a - b << std::endl;
    std::cout << "a * b: " << a * b << std::endl;
    std::cout << "a / b: " << a / b << std::endl;

    // Min and Max Functions
    std::cout << "Min and Max Functions:" << std::endl;
    std::cout << "max(a, b): " << Fixed::max( a, b ) << std::endl;
    std::cout << "min(a, b): " << Fixed::min( a, b ) << std::endl;

    // Comparison Operators
    std::cout << "Comparison Operations:" << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;

    // Raw Bits Functions
    std::cout << "Raw Bits Functions:" << std::endl;
    std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl;
    a.setRawBits(1024);
    std::cout << "a after setRawBits(1024): " << a << std::endl;
    std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl;

    // Edge Cases
    std::cout << "Edge Cases:" << std::endl;
    try {
        Fixed zero(0);
        std::cout << "b / zero: " << b / zero << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    // Copy Assignment Operator
    std::cout << "Copy Assignment Operator:" << std::endl;
    Fixed e;
    e = b;
    std::cout << "e (after e = b): " << e << std::endl;

    return 0;
}
