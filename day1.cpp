#include <bits/stdc++.h>
using namespace std;

class Employee
{
    public:
    float eligible;
    int salary;
};

int main(){

    Employee E1,E2;
    E1.eligible=50.0;
    E1.salary=682726476;
    E2.eligible=60.0;
    E2.salary=109000000;
    
    cout << "Enter eligibilty result "<< "= " <<E1.eligible<<endl;

    cout << "Enter salary "<< "= " <<E1.salary<<endl;
    
     cout << "Enter eligibilty result "<< "= " <<E2.eligible<<endl;

    cout << "Enter salary "<< "= " <<E2.salary<<endl;

    return 0;

}
