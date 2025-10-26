#include <iostream>
using namespace std;

class Account {
    int accNo;
    float balance;

public:
    void accept() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void addInterest() {
        if (balance >= 5000) {
            balance = balance + (balance * 0.10); 
        }
    }

    void display() {
        cout << "Account No: " << accNo << " Balance: " << balance << endl;
    }

    float getBalance() {
        return balance;
    }
};

int main() {
    Account a[10];

    for (int i = 0; i < 10; i++) {
        a[i].accept();
        a[i].addInterest();
    }

    cout << "\nAccounts with Balance >= 5000:\n";
    for (int i = 0; i < 10; i++) {
        if (a[i].getBalance() >= 5000) {
            a[i].display();
        }
    }

    return 0;
}