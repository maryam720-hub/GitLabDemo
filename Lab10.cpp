#include <iostream>
using namespace std;

class Rectangle {
    int l, w;

public:
    // Constructor
    Rectangle(int length = 0, int width = 0) {
        l = length;
        w = width;
    }

    // Area method
    int area() {
        return l * w;
    }

    // Perimeter method (Task 2)
    int perimeter() {
        return 2 * (l + w);
    }

    // Display method (Task 5)
    void display() {
        cout << "Length = " << l << ", Width = " << w << endl;
    }
};

class Square {
    int side;

public:
    // Constructor (Task 6)
    Square(int s) {
        side = s;
    }

    // Area method
    int area() {
        return side * side;
    }
};

int main() {

    // -----------------------
    // Task 4: User input
    // -----------------------
    int L, W;
    cout << "Enter length: ";
    cin >> L;
    cout << "Enter width: ";
    cin >> W;

    Rectangle userRect(L, W);
    cout << "\nUser Rectangle Area = " << userRect.area() << endl;
    cout << "User Rectangle Perimeter = " << userRect.perimeter() << endl;
    userRect.display();


    // -----------------------
    // Task 3: Three rectangle objects
    // -----------------------
    Rectangle r1(4, 5);
    Rectangle r2(6, 3);
    Rectangle r3(10, 2);

    cout << "\n--- Three Rectangles ---\n";
    r1.display();
    cout << "Area = " << r1.area() << ", Perimeter = " << r1.perimeter() << endl;

    r2.display();
    cout << "Area = " << r2.area() << ", Perimeter = " << r2.perimeter() << endl;

    r3.display();
    cout << "Area = " << r3.area() << ", Perimeter = " << r3.perimeter() << endl;


    // -----------------------
    // Task 6: Square class
    // -----------------------
    Square s1(6);
    cout << "\nSquare Area = " << s1.area() << endl;


    // -----------------------
    // Task 7: Compare two rectangles
    // -----------------------
    Rectangle A(7, 4);
    Rectangle B(5, 8);

    cout << "\n--- Comparing Two Rectangles ---\n";
    cout << "Area of A = " << A.area() << endl;
    cout << "Area of B = " << B.area() << endl;

    if (A.area() > B.area())
        cout << "Rectangle A has a bigger area.\n";
    else if (B.area() > A.area())
        cout << "Rectangle B has a bigger area.\n";
    else
        cout << "Both rectangles have the SAME area.\n";

    return 0;
}
