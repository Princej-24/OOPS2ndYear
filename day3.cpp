#include <bits/stdc++.h>
using namespace std;

int main() {
    int x=5,y=4,z;
    int sum(int*val1,int*val2);
    z=sum(&x,&y);
    cout<<z;
}
  int sum(int*val1,int*val2)
  {
      int a=(*val1)+(*val2);
      return a;
  }