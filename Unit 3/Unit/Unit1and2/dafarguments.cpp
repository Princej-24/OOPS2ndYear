#include <iostream>
using namespace std;

void greet(string name = "Prince") {
    cout << "Hello " << name;
}

int main() {

    greet(); // we didn't provided here name so it take the default name Prince

    return 0;
}