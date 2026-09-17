// Create a base class shape and derived class circle, both will non-virtual function draw().Show that which function , compiler will call due to early binding in derived  class

// by pointer

#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* ptr;

    Circle c;
    ptr = &c;

    ptr->draw();

    return 0;
}

// without pointer

#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle c;

    c.draw();              // Circle's draw()
    c.Shape::draw();       // Shape's draw()

    return 0;
}
