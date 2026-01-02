#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void area() override {
        cout << "Area of Circle = π * r * r" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of Rectangle = length * width" << endl;
    }
};

// Task 3: Triangle class
class Triangle : public Shape {
public:
    void area() override {
        cout << "Area of Triangle = 1/2 * base * height" << endl;
    }
};

int main() {
    Shape* s;

    Circle c;
    Rectangle r;
    Triangle t;

    s = &c;
    s->area();

    s = &r;
    s->area();

    s = &t;
    s->area();

    return 0;
}
