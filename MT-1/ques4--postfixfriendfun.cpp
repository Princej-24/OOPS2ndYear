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

    // Postfix -- using friend function
    friend Marks operator--(Marks &m, int);
};

// Friend function definition
Marks operator--(Marks &m, int) {
    Marks temp = m;      // store old value
    m.marks = m.marks - 1;
    return temp;         // return old value
}

int main() {
    Marks m(99);

    cout << "Before decrement: ";
    m.showmarks();

    m--;

    cout << "After decrement: ";
    m.showmarks();

    return 0;
}