#include <iostream>
using namespace std;

class Marks {
    int marks;

public:
    Marks(int m) {
        marks = m;
    }

    void showmarks() {
        cout << marks << endl;
    }

    // Prefix -- using friend function
    friend Marks operator--(Marks &m);
};

// Friend function definition
Marks operator--(Marks &m) {
    m.marks = m.marks - 1;
    return m;
}

int main() {
    Marks m(99);

    cout << "Before decrement: ";
    m.showmarks();

    --m;

    cout << "After decrement: ";
    m.showmarks();

    return 0;
}

// output 
// Before decrement: 99
// After decrement: 98