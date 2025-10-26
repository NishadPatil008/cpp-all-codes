#include <iostream>
using namespace std;
class ClassB;
class ClassA {
    int a;
public:
    ClassA(int val) : a(val) {}
    friend int sum(ClassA, ClassB);
};

class ClassB {
    int b;
public:
    ClassB(int val) : b(val) {}
    friend int sum(ClassA, ClassB);
};
int sum(ClassA objA, ClassB objB) {
    return objA.a + objB.b;
}
int main() {
    ClassA a(10);
    ClassB b(20);
    cout << "Sum: " << sum(a, b) << endl;
    return 0;
}

