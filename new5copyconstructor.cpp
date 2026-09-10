#include <iostream>
using namespace std;

class Complex {
private:
    int a, b;

public:
    // Default constructor
    Complex() {
        a = 0;
        b = 0;
    }

    // Parameterized constructor
    Complex(int x, int y) {
        a = x;
        b = y;
    }

    // Copy Constructor
    // Note: Reference (&) is mandatory to prevent infinite recursion
    Complex(const Complex &c) {
        a = c.a;
        b = c.b;
    }

    void showData() {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main() {
    Complex c1(3, 4); // Calls Parameterized Constructor
    
    // Two syntax options to invoke the Copy Constructor:
    Complex c2(c1);   // Method 1: Functional notation
    Complex c3 = c1;  // Method 2: Assignment-like initialization

    cout << "c1 data: ";
    c1.showData();

    cout << "c2 data: ";
    c2.showData();

    cout << "c3 data: ";
    c3.showData();

    return 0;
}