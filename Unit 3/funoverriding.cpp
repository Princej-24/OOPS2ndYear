#include <bits/stdc++.h>
using namespace std;

class A{
    void f1() {};
    void f2() {};
};
class B:public A{
    public:
    void f1(){}; // function overriding
    void f2(int x){}; // function hiding
};

int main(){
    B obj;
    obj.f1();
    return 0;
}

// --------------------------------

#include <bits/stdc++.h>
using namespace std;

class A{
    void f1() {
        cout<<"Prince";
    };
    void f2() {};
};
class B:public A{
    public:
    void f1(){
         cout<<"Prince";
    }; // function overriding
    void f2(int x){}; // function hiding
};

int main(){
    B obj;
    obj.f1();
    return 0;
}
// output = Prince