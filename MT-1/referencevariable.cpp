// A reference variable is another name (alias) for an existing variable.

int x = 10;
int &ref = x;

// x   → original variable
// ref → another name for x

// data_type &reference_name = original_variable;

#include <iostream>
using namespace std;

int main() {

    int x = 10;

    int &ref = x;

    cout << x << endl;
    cout << ref << endl;

    return 0;
}

// output
// 10
// 10