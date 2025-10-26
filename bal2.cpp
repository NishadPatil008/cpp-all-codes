#include <iostream>
using namespace std;

class Account {
    int accNo;
    float balance;

public:
    void accept() {
        cout<<"Enter Account Number:";
        cin>>accNo;
        cout<<"Enter Balance:";
        cin>>balance;
    }

    void display() {
        cout<<"Account No:"<<accNo<<"\nBalance:"<<balance<<endl;
    }

    void Balance(float Balance) {
        balance=Balance;
    }

    float Balance() {
        return balance;
    } 
};

int main() {
    Account a[10];

    for(int i=0;i<10;i++) {
        a[i].accept();

       
        float bal = a[i].Balance();
        if (bal >= 5000) {
            float interest = bal*10/100;
            bal+= interest;
            a[i].Balance(bal);  
        }
    }

    cout<<"\n Accounts with Balance >= 5000:\n";
    for (int i=0;i<10;i++) {
        if (a[i].Balance() >= 5000) {
            a[i].display();
        }
    }

    return 0;
}