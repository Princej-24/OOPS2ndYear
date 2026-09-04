#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:

    Circle() {
        radius = 1.0;
    }

    Circle(float r) {
        radius = r;
    }

    ~Circle() {
        cout << "Object destroyed" << endl;
    }

    float area() {
        return 3.14 * radius * radius;
    }
};

int main() {

    Circle c1;
    cout << "Area of circle (default): " << c1.area() << endl;

    Circle c2(5.0);
    cout << "Area of circle (parameterized): " << c2.area() << endl;

    return 0;
}