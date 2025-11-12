#include <iostream>
using namespace std;

class sumc {
public:
    float floatSum = 0;
    int intSum = 0;

    void calc(float a) {
        floatSum += a;
    }
    void calc(int a) {
        intSum += a;
    }
};

int main() {
    sumc obj;
    float f;
    int i;

    cout << "Enter 5 float values: ";
    for (int j = 0; j < 5; j++) {
        cin >> f;
        obj.calc(f);
    }
    cout << "Sum of float values: " << obj.floatSum << endl;

    cout << "Enter 10 integer values: ";
    for (int j = 0; j < 10; j++) {
        cin >> i;
        obj.calc(i);
    }
    cout << "Sum of integer values: " << obj.intSum << endl;

    return 0;
}