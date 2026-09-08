#include <iostream>
#include <conio.h>
using namespace std;

int big(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << big(3.5, 4.2);
    return 0;
}