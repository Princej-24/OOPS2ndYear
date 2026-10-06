// A friend function is a function that is outside the class, but it can access the class's private and protected members
#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    friend void showLength(Box b);
};

void showLength(Box b) {
    cout << "Length = " << b.length;
}

int main() {
    Box obj;

    showLength(obj);

    return 0;
}