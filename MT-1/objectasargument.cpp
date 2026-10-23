#include <iostream>
using namespace std;

class Student {

public:
    string name;
    int marks;
};

void display(Student s) {

    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {

    Student s;

    s.name = "Prince";
    s.marks = 90;

    display(s);

    return 0;
}