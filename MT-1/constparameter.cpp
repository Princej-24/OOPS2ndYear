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

// with string

#include <iostream>
#include <string>
using namespace std;

void showName(const string& name) {
    cout << "Name: " << name << endl;
}

int main() {
    string s = "Prince";
    showName(s);

    return 0;
}