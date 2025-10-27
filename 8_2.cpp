#include <iostream>
using namespace std;

class ILogin {
public:
    string name, password;
    void accept() {
        cout << "Name: ";
        cin >> name;
        cout << "Password: ";
        cin >> password;
    }
};

class EmailLogin : virtual public ILogin {
public:
    void showEmail() {
        cout << name << " " << password << endl;
    }
};

class MembershipLogin : virtual public ILogin {
public:
    void showMembership() {
        cout << name << " " << password << endl;
    }
};

class Employee : public EmailLogin, public MembershipLogin {
public:
    void input() {
        accept();
    }
    void display() {
        showEmail();
        showMembership();
    }
};

int main() {
    Employee e;
    e.input();
    e.display();
    return 0;
}