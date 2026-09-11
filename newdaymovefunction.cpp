#include <bits/stdc++.h>
#include <memory>
using namespace std;

void function1() {
    unique_ptr<int> p1(new int(50));
    unique_ptr<int>p2;
    // p2=p1;
    p2=move(p1);
    cout<<*p2;
}

int main() {
    function1();
}
