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

    void fun1(int extramarks) {
        marks = marks + extramarks;
    }
};

int main() {
    Marks s1(40);

    s1.showmarks();

    s1.fun1(10);

    s1.showmarks();

    return 0;
}
// output = 40
//          50
// uninary operator // binary operator
// important 