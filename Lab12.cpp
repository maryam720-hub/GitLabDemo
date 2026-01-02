#include <iostream>
using namespace std;

class Area {
public:
    void area(int side) {
        cout << "Area of Square = " << side * side << endl;
    }

    void area(int length, int width) {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() {
    Area a;
    a.area(5);        // Square
    a.area(4, 6);     // Rectangle
    return 0;
}
