#include <iostream>
using namespace std;
class numb {
public:
    int value;
    void acc() {
        cout << "Enter a numb: ";
        cin >> value;
    }
    void disp() {
        cout << "Value: " << value << endl;
    }
    void operator-() {
        value = -value;
    }
};

int main() {
    numb obj;
    obj.acc();
    -obj;
    obj.disp();
    return 0;
}