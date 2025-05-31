#pragma once

class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual ~Shape() {}
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s);
    double calculateArea() const override;
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h);
    double calculateArea() const override;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r);
    double calculateArea() const override;
};
