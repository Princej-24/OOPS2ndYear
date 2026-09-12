#include<iostream>
#include<memory>
using namespace std;

void function3() {
    shared_ptr<int>p1(new int(50));
    shared_ptr<int>p2;
    p2 = p1;
    cout << *p2 << endl;
    cout << *p1 << endl;
    cout << p2.use_count(); // use_count() tells us how many shared_ptrs are currently sharing ownership of the same object // ans = 2
} 

int main() {
    function3();
    return 0;
}