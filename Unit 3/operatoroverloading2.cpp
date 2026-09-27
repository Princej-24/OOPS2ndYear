#include <iostream>
using namespace std;

class Marks
{
    int intmarks;
    int extmarks;

public:
    Marks()
    {
        intmarks = 0;
        extmarks = 0;
    }

    Marks(int im, int em)
    {
        intmarks = im;
        extmarks = em;
    }

    void display()
    {
        cout << intmarks << endl << extmarks;
    }

    Marks operator -(Marks m);
};

Marks Marks::operator -(Marks m)
{
    Marks temp;

    temp.intmarks = intmarks - m.intmarks;
    temp.extmarks = extmarks - m.extmarks;

    return temp;
}

int main()
{
    Marks m1(30,20), m2(10,10), m4;

    m4 = m2 - m1;

    m4.display();
}
// Output:
//-20
//-10