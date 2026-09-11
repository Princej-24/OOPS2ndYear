#include <bits/stdc++.h>
#include <memory>
using namespace std;

void function1() {
    unique_ptr<int> p1(new int(50));
    cout << *p1<<endl;
    p1.reset(new int(500));
    cout<<*p1;
}

int main() {
    function1();
}
// old value automically deleted because destrutor of unique pointer is automatically called .