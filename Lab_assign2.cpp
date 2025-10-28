#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float gpa;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter name of student " << i << ": ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter GPA: ";
        cin >> gpa;
        cout << "-----------------------------" << endl;
        cout << "Student " << i << " Info:\n";
        cout << "Name: " << name << "\nRoll No: " << roll << "\nGPA: " << gpa << endl;
        cout << "-----------------------------\n\n";
    }
    return 0;
}
