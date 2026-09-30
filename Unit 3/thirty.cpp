#include <bits/stdc++.h>
using namespace std;

class Marks {
    int marks;

    public:
    Marks(int m) {
        marks = m;
    }

    void showMarks() {
        cout << marks;
    }
};

int main() {
    Marks s1(50);
    s1.showMarks();

    return 0;
}