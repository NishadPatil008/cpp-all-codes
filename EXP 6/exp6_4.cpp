#include <iostream>
using namespace std;
class employee {
    protected:
    string name;
    int id;
};
class manager : public employee {
    private:
    string dep;
};
class Developer :public employee {
    public:
    string lang;
    string dep;
    void accept() {
        cout << "Enter emp name: ";
        cin >> name;
        cout << "Enter emp ID: ";
        cin >> id;
        cout << "Enter Programming Language: ";
        cin >> lang;
        cout << "Enter department";
        cin >> dep;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Programming Language: " <<lang<< endl;
        cout << "Department: " << dep << endl;

    }
};
int main() {
    Developer d;
    d.accept();
    d.display();
return 0;
}\