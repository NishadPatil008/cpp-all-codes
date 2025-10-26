#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int val) : value(val) {}
    void display() { cout << value << endl; }
    friend void swapNumbers(Number&, Number&);
};

void swapNumbers(Number& n1, Number& n2) {
    int temp = n1.value;
    n1.value = n2.value;
    n2.value = temp;
}

int main() {
    Number n1(5), n2(15);
    cout << "Before swap: "; n1.display(); n2.display();
    swapNumbers(n1, n2);
    cout << "After swap: "; n1.display(); n2.display();
    return 0;
}