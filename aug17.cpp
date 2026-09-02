#include <bits/stdc++.h>
using namespace std;

class Account{
    private:
    int balance;
    static float roi;
    
    public:
    void setBalance(int b){
        balance=b;
        cout<<balance;
    }
};
float Account :: roi = 3.5f;

int main() {
	Account a1;
	a1.setBalance(5);
	
}

///////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Account{
    public:
    int balance;
    static float roi;
    
    public:
    void setBalance(int b){
        balance=b;
        
    }
};
float Account :: roi = 3.5f;

int main() {
	Account a1,a2;
	cout<<Account::roi;
	
}

