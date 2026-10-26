#include <bits/stdc++.h>
using namespace std;

class Student{

    public:

    string name;
    int age;
    float cgpa;
};

int main(){
    Student s;
    s.name="Prince";
    s.age=20;
    s.cgpa=9.4;
    // cin>>s.cgpa;
    
    cout<<s.name;

    return 0;
}