#include <iostream>
using namespace std;

class Number {
    int x, y;
public:
    void getData(int a, int b) {
        x = a; y = b;
    }
    void operator++() { // Unary operator overloading
        ++x;
        ++y;
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Number n;
    n.getData(5, 10);
    cout << "Before increment: ";
    n.display();
    ++n; // Calls overloaded operator
    cout << "After increment: ";
    n.display();
    return 0;
}