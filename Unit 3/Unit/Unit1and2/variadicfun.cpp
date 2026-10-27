#include <iostream>
using namespace std;

template <typename... Args> // create a generic function // ... means parameter pack
void add(Args... args) {
    cout << (args + ...); // fold expression
}

int main() {

    add(10, 20);
    cout << endl;

    add(10, 20, 30);
    cout << endl;

    add(10, 20, 30, 40);

    return 0;
}