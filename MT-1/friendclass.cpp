#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    friend class Show;
};

class Show {
public:
    void showLength(Box b) {
        cout << "Length = " << b.length;
    }
};

int main() {
    Box obj;
    Show s;

    s.showLength(obj);

    return 0;
}
