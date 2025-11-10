#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1; // Object creation
    s1.name = "John";
    s1.rollNo = 101;

    cout << "Student Details:" << endl;
    s1.display();

    return 0;
}