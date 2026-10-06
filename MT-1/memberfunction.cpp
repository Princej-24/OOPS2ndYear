//A member function is a function that is defined inside a class and is used to perform some operation on the objects of that class.

#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    void displayMarks()
    {
        cout << "Marks = " << marks;
    }
};

int main()
{
    Student s1;

    s1.setMarks(90);
    s1.displayMarks();

    return 0;
}