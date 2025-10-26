#include <iostream>
using namespace std;
class vehicle {
    public:
    string model;
    string brand;
};
class car : public vehicle {
    protected:
    int type;
};
class electriccar :public car {
    public:
    int battery_capacity;
    void accept() {
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Type (1 for Sedan, 2 for SUV): ";
        cin >> type;
        cout << "Enter Battery Capacity (in kWh): ";
        cin >> battery_capacity;
    }
    void display() {
        cout << "Model: " << model << endl;
        cout << "Brand: " << brand << endl;
        cout << "Type: " << (type == 1 ? "Sedan" : "SUV") << endl;
        cout << "Battery Capacity: " << battery_capacity << " kWh" << endl;
    }
};
int main() {
    electriccar c;
    c.accept();
    c.display();
    return 0;
}