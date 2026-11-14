#include <iostream>
using namespace std;

class Marks {
    int marks;
    int extmarks;
    
    public:
    Marks(int m, int e) {
        marks = m;
        extmarks = e;
    }
    void showMarks() {
        cout << "Internal Marks = " << marks << endl;
        cout << "External Marks = " << extmarks << endl;
    }
    Marks operator +(Marks m) {
        Marks temp(0, 0);
        temp.marks = marks + m.marks;
        temp.extmarks = extmarks + m.extmarks;
        return temp;
    }

};
int  main(){
    Marks m1(50,70),m2(60,80);
    // m1.showMarks();
    // m2.showMarks();
    Marks m3=m1+m2;
    m3.showMarks();
}