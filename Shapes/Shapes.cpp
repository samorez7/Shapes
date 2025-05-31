#include "Shapes.h"
#include <cmath>

#define PI 3.141592653589793

// Square
Square::Square(double s) : side(s) {}
double Square::calculateArea() const {
    return side * side;
}

// Triangle
Triangle::Triangle(double b, double h) : base(b), height(h) {}
double Triangle::calculateArea() const {
    return 0.5 * base * height;
}

// Circle
Circle::Circle(double r) : radius(r) {}
double Circle::calculateArea() const {
    return PI * radius * radius;
}
