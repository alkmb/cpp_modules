#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed( const int value )
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << fractionalBits;
}

Fixed::Fixed( const float value )
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed( const Fixed & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed & Fixed::operator=( const Fixed & rhs )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &rhs )
        value = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

float Fixed::toFloat( void ) const
{
    return (float)value / (1 << fractionalBits);
}

int Fixed::toInt( void ) const
{
    return value >> fractionalBits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
    o << rhs.toFloat();
    return o;
}

bool Fixed::operator>( const Fixed & rhs ) const
{
    return value > rhs.getRawBits();
}

bool Fixed::operator<( const Fixed & rhs ) const
{
    return value < rhs.getRawBits();
}

bool Fixed::operator>=( const Fixed & rhs ) const
{
    return value >= rhs.getRawBits();
}

bool Fixed::operator<=( const Fixed & rhs ) const
{
    return value <= rhs.getRawBits();
}

bool Fixed::operator==( const Fixed & rhs ) const
{
    return value == rhs.getRawBits();
}

bool Fixed::operator!=( const Fixed & rhs ) const
{
    return value != rhs.getRawBits();
}

Fixed Fixed::operator+( const Fixed & rhs ) const
{
    return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-( const Fixed & rhs ) const
{
    return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*( const Fixed & rhs ) const
{
    return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/( const Fixed & rhs ) const
{
    return Fixed(toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++( void )
{
    value++;
    return *this;
}

Fixed Fixed::operator++( int )
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed & Fixed::operator--( void )
{
    value--;
    return *this;
}

Fixed Fixed::operator--( int )
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed & Fixed::min( Fixed &a, Fixed &b )
{
    if (a < b)
        return a;
    else
        return b;
}

const Fixed & Fixed::min( const Fixed &a, const Fixed &b )
{
    if (a < b)
        return a;
    else
        return b;
}

Fixed & Fixed::max( Fixed &a, Fixed &b )
{
    if (a > b)
        return a;
    else
        return b;
}

const Fixed & Fixed::max( const Fixed &a, const Fixed &b )
{
    if (a > b)
        return a;
    else
        return b;
}