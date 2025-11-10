#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void getData(int r, int i) {
        real = r;
        imag = i;
    }

    Complex add(Complex c2) { // Pass object and return object
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.getData(3, 4);
    c2.getData(5, 6);
    c3 = c1.add(c2); // Object passed and returned
    cout << "Resultant Complex Number: ";
    c3.display();
    return 0;
}
