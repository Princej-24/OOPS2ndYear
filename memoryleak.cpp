// This topic is very important 
// #include <bits/stdc++.h>
// using namespace std;

// int function (){
//     int *p=new int(10);
//     if(cond>0){
//         return val;
//     }
//     delete p;
// }
// void main(){
//     cout<<function();
// }


#include <bits/stdc++.h>
using namespace std;

int function1() {

    int *p = new int(10);

    int cond = 5;
    int val = *p;

    if (cond > 0) {
        return val;
    }

    delete p;

    return 0;
}

int main() {

    cout << function1();

    return 0;
}