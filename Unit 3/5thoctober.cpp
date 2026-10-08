// incorrect code 

// #include <iostream>
// using namespace std;

// class Box {
//     int length;
//     int breadth;

// public:
//     void setdata(int l, int b) {
//         length = l;
//         breadth = b;
//     }
// };

// int main() {
//     Box b1;

//     b1.setdata(50, 5);

//     int area = b1.length * b1.breadth;

//     cout << area;

//     return 0;
// }


// Correct code 

#include <iostream>
using namespace std;

class Box {
    int length;
    int breadth;

public:
    void setdata(int l, int b) {
        length = l;
        breadth = b;
    }

    int getArea() {
        return length * breadth;
    }
};

int main() {
    Box b1;

    b1.setdata(50, 5);

    cout << b1.getArea();

    return 0;
}
