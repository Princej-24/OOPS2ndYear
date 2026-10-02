#include <bits/stdc++.h>
using namespace std;

void change(int x){
    x=10;
}

int main(){
    int x = 4;
    cout<<x<<endl;
    change(x); // the moment change x is called a copy of x=4 is passed , inside the fun x=10 only the copy changes then the function's local x is destroyed the original x in main() is still =4
    cout<<x<<endl;
}