#include <iostream>
using namespace std;

class A {
public:
    int a = 5;
};

class B {
public:
    int b = 10;

    void swapValues(A objA, B objB) {
        int temp = objA.a;
        objA.a = objB.b;
        objB.b = temp;

        cout << "Inside swapValues(): Class A:a = " << objA.a << ", Class B:b = " << objB.b << endl;
    }
};

int main() {
    A objA;
    B objB;

    cout << "Before Swap: Class A:a = " << objA.a << ", Class B:b = " << objB.b << endl;

    objB.swapValues(objA, objB); // Pass-by-value: copies of objA and objB sent

    cout << "After Swap: Class A:a = " << objA.a << ", Class B:b = " << objB.b << endl;

    return 0;
}