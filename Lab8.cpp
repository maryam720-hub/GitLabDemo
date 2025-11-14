#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student st;

    cout << "Enter name roll gpa: ";
    cin >> st.name >> st.roll >> st.gpa;

    cout << "\nStudent Information:\n";
    cout << "Name: " << st.name << endl;
    cout << "Roll: " << st.roll << endl;
    cout << "GPA: " << st.gpa;

    return 0;
}
