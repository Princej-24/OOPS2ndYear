// incorrect code 

// #include<iostream>
// using namespace std;

// class Box {
//     int length;
//     int breadth;

// public:
//     void setdata(int l, int b) {
//         length = l, breadth = b;
//     }
// };

// int calculateArea(Box b) {
//     return b.length * b.breadth;
// }

// int main() {
//     Box b1;
//     b1.setdata(50, 5);

//     int area = calculateArea(b1);

//     cout << area;

//     return 0;
// }



// correct code (friend function )

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

    friend int calculateArea(Box b);
};

int calculateArea(Box b) {
    return b.length * b.breadth;
}

int main() {
    Box b1;

    b1.setdata(50, 5);

    int area = calculateArea(b1);

    cout << area;

    return 0;
}