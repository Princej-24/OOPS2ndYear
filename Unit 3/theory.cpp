#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << a << " " << b;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setData(5, 4);
    c2.setData(5, 2);

    c1.showData();

    // c3=c1+c2; error dega 

    return 0;
}

// -------------------------------

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << a << " " << b;
    }
    Complex add (Complex c){
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setData(5, 4);
    c2.setData(5, 2);

    c1.showData();
    // c3=c1.add(c2); error nhi h ye , not running on vs code
    
    c3.showData();


    return 0;
}
//output: 5 4 10 6

// --------------------------

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << a << " " << b<<endl;
    }
    Complex operator + (Complex c){
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setData(5, 4);
    c2.setData(5, 2);

    c1.showData();
    c3=c1.operator+(c2);
    
    c3.showData();


    return 0;
}

//------------------------------

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << a << " " << b<<endl;
    }
    Complex operator + (Complex c){
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setData(5, 4);
    c2.setData(5, 2);

    c1.showData();
    c3=c1+(c2); // change 
    
    c3.showData();


    return 0;
}
