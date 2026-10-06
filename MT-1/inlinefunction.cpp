// An inline function is a function where we request the compiler to replace the function call with the actual function code.

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << square(5);

    return 0;
}