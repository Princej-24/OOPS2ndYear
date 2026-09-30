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

    void operator++()
    {
        marks += 1;
    }
};

int main()
{
    Marks s1(50);

    s1.showmarks();

    ++s1;

    s1.showmarks();

    return 0;
}