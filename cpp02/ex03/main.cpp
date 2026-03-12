#include <iostream>
#include "Point.hpp"

void test_bsp(Point const a, Point const b, Point const c, Point const point, std::string name) {
    bool result = bsp(a, b, c, point);
    
    std::cout << "Point " << name << ": ";
    if (result == true)
        std::cout << "INSIDE (True)" << std::endl;
    else
        std::cout << "OUTSIDE/EDGE (False)" << std::endl;
}

int main(void) {
    
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);

    std::cout << "Triangle Vertices: A(0,0), B(10,0), C(0,10)" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    Point p1(2.5f, 2.5f);
    test_bsp(a, b, c, p1, "Center (2.5, 2.5)");

    Point p2(20.0f, 20.0f);
    test_bsp(a, b, c, p2, "Far Away (20, 20)");

    Point p3(5.0f, 0.0f);
    test_bsp(a, b, c, p3, "On Bottom Edge (5, 0)");

    Point p4(0.0f, 0.0f);
    test_bsp(a, b, c, p4, "On Vertex A (0, 0)");

    Point p5(5.0f, 5.0f);
    test_bsp(a, b, c, p5, "On Hypotenuse Edge (5, 5)");

    Point p6(5.1f, 5.1f);
    test_bsp(a, b, c, p6, "Just Outside (5.1, 5.1)");

    return 0;
}