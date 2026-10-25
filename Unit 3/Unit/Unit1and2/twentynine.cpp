#include <iostream>
using namespace std;

class Marks {
private:
    int marks;

public:
    Marks(int m) {
        marks = m;
    }

    void showmarks() {
        cout << marks << endl;
    }

    friend void fun1(Marks &s, int extramarks);
};

void fun1(Marks &s, int extramarks) {
    s.marks = s.marks + extramarks;
}

int main() {

    Marks s1(40);

    s1.showmarks();

    fun1(s1, 10);

    s1.showmarks();

    return 0;
} // twenty eight problem with friend function
// inside friend function , this keyword will not use
