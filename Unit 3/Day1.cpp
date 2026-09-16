#include <bits/stdc++.h>
using namespace std;

class A{
    void f1() {};
    void f2(); // =======
};
class B:public A{
    public:
    void f1(){};
    void f2(int x); // ====== this is not a function overloading 
};

int main(){
    return 0;
}

// ----------------------------------


#include <bits/stdc++.h>
using namespace std;

class A{
    void f1() {};
    void f2();
};
class B:public A{
    public:
    void f1(){};
    void f2(int x);
};

int main(){
    B obj;
    obj.f1();
    return 0;
}


// -------------------------

#include <bits/stdc++.h>
using namespace std;

class A {
public:
    void f1() {
        cout << "Prince"; // for output 
    }

    void f2() {}
};

class B : public A {
public:
    void f1() {
        cout << "Prince";
    }

    void f2(int x) {}
};

int main() {
    B obj;
    obj.f1();

    return 0;
}