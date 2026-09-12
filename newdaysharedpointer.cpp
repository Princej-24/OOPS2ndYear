#include <bits/stdc++.h>
#include <memory>
using namespace std;

void function1() {
    shared_ptr<int> p1(new int(50));
    shared_ptr<int>p2;
    p2=p1; // here we use reset funtion to update the value
    cout<<*p2;
    cout<<*p1; //// 5050
}

int main() {
    function1();
}
