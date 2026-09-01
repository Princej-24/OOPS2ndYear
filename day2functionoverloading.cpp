#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    int mark(int a)
    {
        return a;
    }

    int mark(int a, int b)
    {
        return a + b;
    }

    int mark(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Employee m;

    cout << m.mark(12) << endl;
    cout << m.mark(12,13) << endl;
    cout << m.mark(12,13,14) << endl;

    return 0;
}