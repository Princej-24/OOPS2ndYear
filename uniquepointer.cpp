// This is a type of Smart Pointer
#include <bits/stdc++.h>
#include <memory>
using namespace std;

void function1() {
    unique_ptr<int> ptr(new int(50));
    cout << *ptr;
}

int main() {
    function1();
    return 0;
}