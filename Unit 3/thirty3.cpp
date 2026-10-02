#include <bits/stdc++.h>
using namespace std;

void fun1() {
    int y = 10;
    static int x = 5;
    x++;
    y++;
    cout << y << endl;
    cout << x << endl;
}

int main() {
    fun1();
    
    return 0;
} // output : 11
  // output : 6

  // ---------------------------

  #include <bits/stdc++.h>
using namespace std;

void fun1() {
    int y = 10;
    static int x = 5; // means its initial value is zero 
    x++;
    y++;
    cout << y << endl;
    cout << x << endl;
}

int main() {
    fun1();
    fun1(); // output:11 and 7 
    
    return 0;
}