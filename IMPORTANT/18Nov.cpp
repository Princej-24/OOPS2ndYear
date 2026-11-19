#include <iostream>
#include <string>
using namespace std;

class Human {
    string Religion;
protected:
    string name;
    int age, weight;
};

class Student : private Human {
private:
    int roll_no, fees;
public:
    Student(string name, int age, int weight, int roll_no, int fees) {
        // Accessing inherited protected members (allowed)
        this->name   = name;
        this->age    = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->fees    = fees;
    }

    void display() {
        cout << "Name    : " << name   << endl;
        cout << "Age     : " << age    << endl;
        cout << "Weight  : " << weight << endl;
        cout << "Roll No : " << roll_no << endl;
        cout << "Fees    : " << fees    << endl;
    }
};

int main() {
    Student s("ram", 20, 55, 101, 50000);
    s.display();
    return 0;
}