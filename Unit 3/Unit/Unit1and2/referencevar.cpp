// datatype &reference = variable;

// int x = 10;

// int &ref = x;

#include <iostream>
using namespace std;

int main() {

    int x = 10;

    int &ref = x;

    cout << "Value of x: " << x << endl;
    cout << "Value of ref: " << ref << endl;

    ref = 20;

    cout << "After changing ref:" << endl;

    cout << "Value of x: " << x << endl;
    cout << "Value of ref: " << ref << endl;

    return 0;
}