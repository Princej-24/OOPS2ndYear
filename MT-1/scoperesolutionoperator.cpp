// It is used to specify which scope a particular variable, function, or member belongs to .
// Defining a class member function outside the class.
// We can separate the declaration and definition.


// part 1
// Defining a class member function outside the class 

#include <iostream>
using namespace std;

class Student {
public:
    void display();
};

void Student::display() {
    cout << "Hello";
}

int main() {
    Student s;

    s.display();

    return 0;
}

// without scope resolution 

#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "Hello";
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}


// part 2
// Accessing a global variable

#include <iostream>
using namespace std;

int x = 10;

int main() {
    int x = 20;

    cout << x << endl;
    cout << ::x;

    return 0;
}