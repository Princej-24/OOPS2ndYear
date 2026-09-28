#include <iostream>
using namespace std;

class Marks{
        private:
        int marks;

        public:
        Marks(int m ){
            marks=m;
        }
        void showmarks(){
            cout<<marks;
        }
    };

int main(){
    Marks s1(40);
    s1.showmarks();
    return 0 ;
} 
// output = 40