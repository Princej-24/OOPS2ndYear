#include <iostream>
using namespace std;

class Marks
{
private:
    int marks;

public:
    Marks(int m)
    {
        marks = m;
    }

    void showmarks()
    {
        cout << marks << endl;
    }

    // Friend function for pre-decrement
    friend void operator--(Marks &s);
};

// Pre-decrement operator
void operator--(Marks &s)
{
    --s.marks;
}

int main()
{
    Marks s1(50);

    s1.showmarks();

    --s1;

    s1.showmarks();

    return 0;
}