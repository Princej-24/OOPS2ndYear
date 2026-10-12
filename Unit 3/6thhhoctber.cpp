// inline with static data member with friend function
#include <iostream>
using namespace std;

class Employee{
private:
    int salary;

public:
    
    static int total;

    Employee(int s) {
        salary = s;
        total++;
    }

    inline void showSalary() {
        cout << "Salary: " << salary << endl;
    }

    friend void displaySalary(Employee e);
};

int Employee::total = 0;

void displaySalary(Employee e) {
    cout << "Salary using friend function: " << e.salary << endl;
}

int main() {
    Employee e1(25000);
    Employee e2(30000);

    e1.showSalary();
    e2.showSalary();

    displaySalary(e1);

    cout << "Total employees: " << Employee::total << endl;

    return 0;
}