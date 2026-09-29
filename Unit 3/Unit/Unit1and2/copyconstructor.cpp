#include <iostream>
using namespace std;

class Student {

public:
    string name;
    int marks;

    Student(string n, int m) {

        name = n;
        marks = m;
    }

    Student(const Student& other) {

        name = other.name;
        marks = other.marks;
    }

    void display() {

        cout << name << " " << marks << endl;
    }
};

int main() {

    Student s1("Prince", 90);

    Student s2 = s1;

    s1.display();
    s2.display();

    return 0;
}