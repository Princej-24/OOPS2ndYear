// auto allows the compiler to automatically determine the type of a variable from its initializer.
// It is especially useful when the type is long or complicated.
// vector<int>::iterator it = numbers.begin(); ( can be written as auto it = numbers.begin();)

#include <iostream>
using namespace std;

int main() {

    auto a = 10;
    auto b = 20.5;
    auto c = 'A';

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}