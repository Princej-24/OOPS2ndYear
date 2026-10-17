//Inline Function 
#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << square(5); // 5*5
    return 0;
}

// Friend Function 

#include <iostream>
using namespace std;

class Student {

private:
    int marks = 90;

public:

    friend void display(Student s);
};

void display(Student s) {

    cout << "Marks: " << s.marks;
}

int main() {

    Student s;

    display(s);

    return 0;
}

// 


