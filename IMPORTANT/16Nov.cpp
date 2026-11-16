#include <iostream>
using namespace std;
class Human{
    public:
 int age ;
Human(){
     age=55;
}
};

class Student :public Human{
public:
// int age;
Student(){
    // age=20;
}
void show(){
    
    cout<<age<<endl;
}
};

int main(){
    Student st;
    st.show();
}