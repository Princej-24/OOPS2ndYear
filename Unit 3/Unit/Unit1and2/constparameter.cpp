#include <iostream>
using namespace std;

void display(const int x) {

    cout << "Value: " << x;

    // x = 20;  // Error
}

int main() {

    int a = 10;

    display(a);

    return 0;
}