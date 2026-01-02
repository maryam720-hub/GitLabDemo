#include <iostream>
using namespace std;

/* -------- Task 1: Compile-Time Polymorphism -------- */
class Area {
public:
    void area(int side) {
        cout << "Area of Square = " << side * side << endl;
    }

    void area(int length, int width) {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

/* -------- Base Class for Runtime Polymorphism -------- */
class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};

/* -------- Derived Classes -------- */
class Circle : public Shape {
public:
    void area() override {
        cout << "Area of Circle = π * r * r" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of Rectangle = length * width" << endl;
    }
};

class Triangle : public Shape {
public:
    void area() override {
        cout << "Area of Triangle = 1/2 * base * height" << endl;
    }
};

/* -------- Main Function -------- */
int main() {

    // Task 1 Demonstration
    Area a;
    a.area(5);        // Square
    a.area(4, 6);     // Rectangle

    cout << endl;

    // Task 2 & 3 Demonstration
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

