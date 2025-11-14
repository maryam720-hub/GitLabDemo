#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s1, s2;

    // Input data for first student
    cout << "Enter name of first student: ";
    cin >> s1.name;
    cout << "Enter roll number of first student: ";
    cin >> s1.roll;
    cout << "Enter GPA of first student: ";
    cin >> s1.gpa;

    // Input data for second student
    cout << "\nEnter name of second student: ";
    cin >> s2.name;
    cout << "Enter roll number of second student: ";
    cin >> s2.roll;
    cout << "Enter GPA of second student: ";
    cin >> s2.gpa;

    // Compare GPA and display
    cout << "\nResult:\n";
    if (s1.gpa > s2.gpa)
        cout << s1.name << " has higher GPA: " << s1.gpa << endl;
    else if (s2.gpa > s1.gpa)
        cout << s2.name << " has higher GPA: " << s2.gpa << endl;
    else
        cout << "Both students have equal GPA" << endl;

    return 0;
}
