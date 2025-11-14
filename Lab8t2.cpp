#include <iostream>
using namespace std;

struct Laptop {
    string brand;
    int ram;     // in GB
    float price;
};

int main() {
    Laptop l;

    // Input laptop data
    cout << "Enter laptop brand: ";
    cin >> l.brand;
    cout << "Enter RAM (in GB): ";
    cin >> l.ram;
    cout << "Enter price: ";
    cin >> l.price;

    // Display laptop specifications
    cout << "\nLaptop Specifications:" << endl;
    cout << "Brand: " << l.brand << endl;
    cout << "RAM: " << l.ram << " GB" << endl;
    cout << "Price: $" << l.price << endl;

    return 0;
}
