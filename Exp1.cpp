#include <bits/stdc++.h>
using namespace std;

class student
{ 
    public:
    string name;
    int section;
    float eligible;
};
int main(){
    student  s1;
    s1.name="Prince";
    s1.section=25;
    s1.eligible=60;

    cout << "Enter Name"<< " = " <<s1.name<<endl;

    cout << "Enter Section"<< " = " <<s1.section<<endl;
    
     cout << "Enter eligibilty result "<< " = " <<s1.eligible<<endl;

     return 0;
}
