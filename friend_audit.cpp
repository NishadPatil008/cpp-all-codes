#include <iostream>
using namespace std;

class BankAccount {
    double balance;
public:
    BankAccount(double b) : balance(b) {}
    friend class Audit;
};

class Audit {
public:
    void printBalance(BankAccount acc) {
        cout << "Audited Balance: " << acc.balance << endl;
    }
};

int main() {
    BankAccount acc(5000.75);
    Audit audit;
    audit.printBalance(acc);
    return 0;
}