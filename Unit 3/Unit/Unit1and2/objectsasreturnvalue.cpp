#include <iostream>
using namespace std;

class Student {

public:
    string name;
    int marks;
};

Student createStudent() {

    Student s;

    s.name = "Prince";
    s.marks = 95;

    return s;
}

int main() {

    Student student = createStudent();

    cout << student.name << endl;
    cout << student.marks << endl;

    return 0;
}