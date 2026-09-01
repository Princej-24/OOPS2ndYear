#include <bits/stdc++.h>
using namespace std;

class box {
    private:
    int l, b, h;

    public:
    void setDimension(int x, int y, int z) {
        l = x, b = y, h = z;
    }

    void showDimension() {
        cout << l << endl << b << endl << h;
    }

};

int main() {
	box *p, smallBox;
	p = &smallBox;
	p -> setDimension(5, 10, 15);
	p -> showDimension();
	
	return 0;
}