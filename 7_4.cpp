#include <iostream>
using namespace std;
class ab {
public:
    int number;
    void acc() {
        cout << "Enter number: ";
        cin >> number;
    }
    void disp() {
        cout << "number: " << number << endl;
    }
    void operator++() {
        ++number;
    }   
    void operator++(int) {
        number++;
    }
};
int main() {
    ab obj;
    obj.acc();
    ++obj;
    obj++;
    obj.disp();
    return 0;
}