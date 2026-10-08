// The syntax is:
// return_type function_name(int count, ...);
// The ... is called the ellipsis.

#include <iostream>
using namespace std;

void show(int a, ...)
{
    cout << a;
}

int main()
{
    show(10, 20, 30);
}