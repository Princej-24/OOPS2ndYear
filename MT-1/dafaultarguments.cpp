// A default argument is a value that is automatically used by a function if the caller does not provide that argument.
// Default arguments should generally be provided from right to left

#include <iostream>
using namespace std;

void greet(string name = "Prince") {
    cout << "Hello " << name;
}

int main() {

    greet();

    return 0;
}