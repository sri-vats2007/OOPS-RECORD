#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    void getData(int r, int i) {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c) { // Binary operator overloading
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.getData(3, 4);
    c2.getData(2, 5);
    c3 = c1 + c2; // Calls overloaded +
    cout << "Resultant Complex Number: ";
    c3.display();
    return 0;
}
