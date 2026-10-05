#include <iostream>
using namespace std;

class Student {

private:
    static int count;

public:

    Student() {
        count++;
    }

    static void showCount() {
        cout << "Students: " << count;
    }
};

int Student::count = 0;

int main() {

    Student s1;
    Student s2;

    Student::showCount();

    return 0;
}