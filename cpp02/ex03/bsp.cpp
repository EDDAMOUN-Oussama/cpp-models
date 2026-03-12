#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed des_ab;
    Fixed des_bc;
    Fixed des_ca;

    des_ab = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
    des_bc = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX());
    des_ca = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX());
    return ((des_ab > 0 && des_bc > 0 && des_ca > 0) || (des_ab < 0 && des_bc < 0 && des_ca < 0));
}