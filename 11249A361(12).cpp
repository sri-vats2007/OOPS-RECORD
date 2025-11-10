#include <iostream>
#include <string.h>
using namespace std;

class MyString {
    char str[50];
public:
    void getData() {
        cout << "Enter string: ";
        cin >> str;
    }
    void display() {
        cout << str << endl;
    }
    MyString operator=(MyString &s) { // Assignment operator
        strcpy(str, s.str);
        return *this;
    }
    bool operator==(MyString &s) { // Comparison operator
        return strcmp(str, s.str) == 0;
    }
};

int main() {
    MyString s1, s2;
    s1.getData();
    s2.getData();

    cout << "\nBefore assignment:\n";
    cout << "s1 = "; s1.display();
    cout << "s2 = "; s2.display();

    s2 = s1; // Using overloaded assignment
    cout << "\nAfter assignment:\n";
    cout << "s1 = "; s1.display();
    cout << "s2 = "; s2.display();

    if (s1 == s2)
        cout << "Strings are Equal" << endl;
    else
        cout << "Strings are Not Equal" << endl;

    return 0;
}
