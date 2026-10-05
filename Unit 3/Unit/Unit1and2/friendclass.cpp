#include <iostream>
using namespace std;

class Student {

private:
    int marks = 95;

    friend class Teacher;
};

class Teacher {

public:
    void show(Student s) {

        cout << "Marks: " << s.marks;
    }
};

int main() {

    Student s;

    Teacher t;

    t.show(s);

    return 0;
}