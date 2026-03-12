#include "Point.hpp"

Point::Point():x(0), y(0){};

Point::Point(const float fx, const float fy):x(fx), y(fy){};

Point::Point(const Point& p):x(p.x), y(p.y){};

Point& Point::operator=(const Point& p)
{
    (void) p;
    return (*this);
}

Point::~Point()
{
}

const Fixed& Point::getX() const
{
    return (x);
}

const Fixed& Point::getY() const
{
    return (y);
}
