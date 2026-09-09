#include <bits/stdc++.h>
// #include <conio.h>
using namespace std;

template<typename X>
X big(X a, X b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << big(3.5, 4.2);
    cout << endl;

    cout << big(10, 20);
    cout << endl;

    cout << big(5.5f, 3.2f);
    cout << endl;

    // getch();

    return 0;
}