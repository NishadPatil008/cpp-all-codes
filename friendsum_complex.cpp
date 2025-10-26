#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    void display() { cout << real << " + " << imag << "i" << endl; }
    friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(4, 5), c2(2, 3);
    Complex result = add(c1, c2);
    cout << "Sum of complex numbers: ";
    result.display();
    return 0;
}