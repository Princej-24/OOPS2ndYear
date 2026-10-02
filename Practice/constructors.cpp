#include <bits/stdc++.h>
using namespace std;

class Student{

    public:

    string name;
    int age;
    float cgpa;

    Student(string str,int a,float c){ // constructor it has no return type
        name=str;
        age=a;;
        cgpa=c;
    }
};

void print(Student s){ // passing objects to function // to avoid repeated couts like (cout<<s1.name<<s1.age<<s1.cgpa;)
    cout<<s.name<<s.age<<s.cgpa;
}

int main(){
    Student s1("Prince",20,9.4); // we r using constructor here to avoid this 
    // s1.name="Prince";
    // s1.age=20;
    // s1.cgpa=9.4;
    // cin>>s.cgpa;

    cout<<s1.name<<endl<<s1.age<<endl<<s1.cgpa<<endl;

    return 0;
}

//----------------------

#include <bits/stdc++.h>
using namespace std;

class Student{

    public:

    string name;
    int age;
    float cgpa; // ##

    Student(){

    }

    Student(string str,int a,float c){ // constructor it has no return type
        name=str;
        age=a;;
        cgpa=c;
    }
};

void print(Student s){ // passing objects to function // to avoid repeated couts like (cout<<s.name<<s.age<<s.cgpa;)
    cout<<s.name<<s.age<<s.cgpa;
}

int main(){
    Student s1("Prince",20,9.4);

    //if we want to initialize in both way through normal and through constructor them we have to create default constructor
  
    s1.name="Prince";
    s1.age=20;
    s1.cgpa=9.4;
    // cin>>s.cgpa;

    cout<<s1.name<<endl<<s1.age<<endl<<s1.cgpa<<endl;

    return 0;
}
// it is not necessary that we have to pass same number of parameter in the constructor as present in outside the class as attributes // ##
// we can create multiple constructor
// Students2(s1); // copy constructor // deep copy
// Students s2=s1; // deep copy
