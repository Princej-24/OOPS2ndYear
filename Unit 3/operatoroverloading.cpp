#include <bits/stdc++.h>
using namespace std;

class Marks{
    int intMarks;
    int extMarks;
    public:
    Marks(){
        intMarks=0;
        extMarks=0;
    }
    Marks(int im,int em){
        intMarks = im;
        extMarks=em;
    }
    void display(){
        cout<<intMarks<<endl<<extMarks<<endl;
    }
};

// int main() {
// 	Marks m1(20,25),m2(30,32);
// 	// Marks m3=m1+m2; // it will give error
	
// 	// m3.display();
	
// 	return 0; 

// }

// //-----------------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

// class Marks{
//     int intMarks;
//     int extMarks;

//     public:
//     Marks(){
//         intMarks=0;
//         extMarks=0;
//     }

//     Marks(int im,int em){
//         intMarks = im;
//         extMarks=em;
//     }

//     Marks operator+(Marks m){
//         Marks temp;
//         temp.intMarks = intMarks + m.intMarks;
//         temp.extMarks = extMarks + m.extMarks;
//         return temp;
//     }

//     void display(){
//         cout<<intMarks<<endl<<extMarks<<endl;
//     }
// };

// int main() {
//     Marks m1(20,25),m2(30,32);
//     Marks m3=m1+m2; 

//     m3.display();

//     return 0;
// } // corrected code by chatgpt

//---------------------------------------------------------

// Operator Overloading

#include<bits/stdc++.h>
using namespace std;

class Marks {
    int intMarks;
    int extMarks;

    public:
    Marks() {
        intMarks = 0;
        extMarks = 0;
    } // we can remove this 
    Marks(int im, int em) {
        intMarks = im; extMarks = em;
    }
    void display() {
        cout << intMarks << " " << extMarks;
    }
    Marks sum(Marks m) {
        Marks temp;
        temp.intMarks = intMarks + m.intMarks;
        temp.extMarks = extMarks + m.extMarks;
        return temp;
    }
};

int main () {
    Marks m1(20, 25), m2(30, 32);
    Marks m3 = m1.sum(m2);
    m3.display();
} // corrected code by sir