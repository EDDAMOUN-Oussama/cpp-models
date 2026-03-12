#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{

    private:
        int val;
        static const int fractional_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int new_val);
        Fixed(const float new_val);
        Fixed& operator=(const Fixed &other);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        int toInt( void ) const;
        float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif