#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student *students = new Student[n];

    Student *ptr = students;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        (ptr + i)->input();
    }

    cout << "\n--- Student Details ---\n";

    for (int i = 0; i < n; i++)
    {
        (ptr + i)->display();
    }

    delete[] students;

    return 0;
}