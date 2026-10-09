#include <bits/stdc++.h>
using namespace std;

class Student{

    public:

    string name;
    int age;
    float cgpa;
};

void print(Student s){ // passing objects to function // to avoid repeated couts like (cout<<s.name<<s.age<<s.cgpa;)
    cout<<s.name<<s.age<<s.cgpa;
}

int main(){
    Student s1;
    s1.name="Prince";
    s1.age=20;
    s1.cgpa=9.4;
    // cin>>s.cgpa;

    Student s2;
    s2.name="Prince";
    s2.age=20;
    s2.cgpa=9.4;
    
    print(s1);
    print(s2);

    return 0;
}