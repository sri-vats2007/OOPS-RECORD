#include <iostream>
using namespace std;

class MathOperations {
public:
    void add(int a, int b) {
        cout << "Sum = " << a + b << endl;
    }
    void add(double a, double b) {
        cout << "Sum = " << a + b << endl;
    }
    void add(int a, int b, int c) {
        cout << "Sum = " << a + b + c << endl;
    }
};

int main() {
    MathOperations m;
    m.add(5, 10);
    m.add(2.5, 3.7);
    m.add(1, 2, 3);
    return 0;
}
