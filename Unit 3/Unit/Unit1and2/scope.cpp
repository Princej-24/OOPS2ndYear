// void Student::display() {

//     cout << "Hello";
// } 

#include <iostream>
using namespace std;

class Student {

public:
    void display();
};

void Student::display() {
    cout << "Hello Student";
}

int main() {

    Student s;
    s.display();

    return 0;
}

int x=10;
int &ref=x;