#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    // Constructor
    Counter() {
        count = 0;
    }

    // Increment method returns the counter object
    Counter& increment() {
        this->count++;
        return *this;
    }

    // Display method
    void display() {
        cout << "Count: " << this->count << endl;
    }
};

int main() {
    Counter c;

    c.increment().increment().increment();

    c.display();

    return 0;
}