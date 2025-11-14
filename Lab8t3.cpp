#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle r;

    // Input rectangle dimensions
    cout << "Enter length of rectangle: ";
    cin >> r.length;
    cout << "Enter width of rectangle: ";
    cin >> r.width;

    // Calculate area and perimeter
    float area = r.length * r.width;
    float perimeter = 2 * (r.length + r.width);

    // Display results
    cout << "\nArea of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;

    return 0;
}
