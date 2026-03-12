#include "Fixed.hpp"

Fixed::Fixed():val(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int new_val):val(new_val << fractional_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float new_val):val(roundf(new_val * (1 << fractional_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->val = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    return (val);
}


void Fixed::setRawBits(int const raw)
{
    val = raw;
}

int Fixed::toInt( void ) const
{
    return (val >> fractional_bits);
}

float Fixed::toFloat( void ) const
{
    return ((float)val / (1 << fractional_bits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
