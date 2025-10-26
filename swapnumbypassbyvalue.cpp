#include <iostream>
using namespace std;

class Number {
public:
    int a = 5;
    int b = 10;

    void swapValues(Number obj) {
        int temp = obj.a;
        obj.a = obj.b;
        obj.b = temp;

        // Shows swapped values inside the function
        cout << "Inside swapValues(): a = " << obj.a << ", b = " << obj.b << endl;
    }
};

int main() {
    Number num;

    cout << "Before Swap: a = " << num.a << ", b = " << num.b << endl;

    // Pass by value (makes a copy)
    num.swapValues(num);

    cout << "After Swap: a = " << num.a << ", b = " << num.b << endl;  // Unchanged outside

    return 0;
}