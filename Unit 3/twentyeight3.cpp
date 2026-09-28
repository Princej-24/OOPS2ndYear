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

    void operator +=(int extramarks){
        marks = marks+extramarks;
    }
};

int main() {
    Marks s1(40);

    s1.showmarks();

    s1+=5;

    s1.showmarks();

    return 0;
}
// output = 40
//          45