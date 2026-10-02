#include <bits/stdc++.h>
using namespace std;

class Account {
    private:
    int balance;
    static float roi;
    
    public:
    void setBalance(int b) {
        balance = b;
    }
    
    void showBalance() {
        cout << balance << endl;
        cout << roi << endl;
    }
};

float Account::roi = 5.5;
int main() {
    Account s1, s2;
    
    s1.setBalance(10);
    s2.setBalance(20);

    s1.showBalance();
    s2.showBalance();
    return 0;
}

// Your Output
// 10
// 5.5
// 20
// 5.5
// what do mean by static instance and static function .