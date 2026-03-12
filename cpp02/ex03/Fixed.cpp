#include "Fixed.hpp"

Fixed::Fixed():val(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int new_val):val(new_val << fractional_bits)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float new_val):val(roundf(new_val * (1 << fractional_bits)))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->val = other.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed &other) const
{
    return (this->val > other.val);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->val < other.val);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->val >= other.val);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->val <= other.val);
}

bool Fixed::operator==(const Fixed &other) const
{
    return (this->val == other.val);
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (this->val != other.val);
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed res;

    res.val = this->val + other.val;
    return (res);
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed res;

    res.val = this->val - other.val;
    return (res);
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed res;
    long long sub_res;

    sub_res = (long long)this->val * (long long)other.val;
    res.val = sub_res >> fractional_bits;
    return (res);
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed res;
    long long tmp;

    tmp = (long long)this->val << fractional_bits;
    res.val = (int)(tmp / other.val);
    return (res);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    return (val);
}

Fixed& Fixed::operator++(void)
{
    this->val++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed save(*this);

    this->val++;
    return (save);
}

Fixed& Fixed::operator--(void)
{
    this->val--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed save(*this);

    this->val--;
    return (save);
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

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a <= b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a <= b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a >= b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a >= b)
        return (a);
    return (b);
}


std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
