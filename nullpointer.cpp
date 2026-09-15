#include <bits/stdc++.h>
using namespace std;

int *fun(){
    int num=10;
    return &num;
}
int main() {
	int *ptr=NULL;
	ptr=fun();
	cout<<*ptr;
	return 0;

}
