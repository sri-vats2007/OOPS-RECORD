#include <iostream>
using namespace std;

class Counter {
    static int count; // Static data member
public:
    Counter() {
        count++;
    }
    static void showCount() { // Static member function
        cout << "Object count = " << count << endl;
    }
};

int Counter::count = 0; // Definition outside class

int main() {
    Counter c1, c2, c3;
    Counter::showCount(); // Access static member function
    return 0;
}