#include <iostream>
using namespace std;

// Base cl
class Person {
public:
    string name;
    int age;

    // Task 2
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

// Der cl Std
class Student : public Person {
public:
    int roll;
    float gpa;

    // Constructor using base class constructor (Task 2)
    Student(string n, int a, int r, float g)
        : Person(n, a) {
        roll = r;
        gpa = g;
    }

    // display function (Task 1)
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
        cout << "---------------------" << endl;
    }
};

// Derived class Teacher (Task 3)
class Teacher : public Person {
public:
    string subject;
    float salary;

    Teacher(string n, int a, string s, float sal)
        : Person(n, a) {
        subject = s;
        salary = sal;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    // Task 4: Two student objects
    Student s1("Asiya", 20, 1, 3.4);
    Student s2("Maryam", 21, 2, 3.8);

    cout << "Student Information:" << endl;
    s1.display();
    s2.display();

    // Task 3: Teacher object
    Teacher t1("Farayal", 25, "software construction", 75000);

    cout << "\nTeacher Information:" << endl;
    t1.display();

    return 0;
}
