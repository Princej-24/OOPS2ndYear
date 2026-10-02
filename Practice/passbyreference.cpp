#include <bits/stdc++.h>
using namespace std;

void change(int &x){
    x=10;
}

int main(){
    int x = 4;
    cout<<x<<endl;
    change(x);
    cout<<x<<endl;
}