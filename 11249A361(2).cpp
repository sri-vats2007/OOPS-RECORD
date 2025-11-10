#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    void setData(int l, int b); // Declaration
    void area() { // Defined inside class
        cout << "Area = " << length * breadth << endl;
    }
};

// Definition outside the class
void Rectangle::setData(int l, int b) {
    length = l;
    breadth = b;
}

int main() {
    Rectangle r;
    r.setData(10, 5);
    r.area();
    return 0;
}
