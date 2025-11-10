#include <iostream>
using namespace std;

class Sample {
    int x, y;

public:
    // Default constructor
    Sample() {
        x = 0;
        y = 0;
        cout << "Default Constructor called" << endl;
    }

    // Parameterized constructor
    Sample(int a, int b) {
        x = a;
        y = b;
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy constructor
    Sample(const Sample &s) {
        x = s.x;
        y = s.y;
        cout << "Copy Constructor called" << endl;
    }

    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }

    // Destructor
    ~Sample() {
        cout << "Destructor called for object" << endl;
    }
};

int main() {
    Sample s1;           // Default constructor
    Sample s2(10, 20);   // Parameterized constructor
    Sample s3 = s2;      // Copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
