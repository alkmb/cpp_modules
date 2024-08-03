#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed( const Fixed & src );
        ~Fixed();
        Fixed & operator=( const Fixed & rhs );
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif