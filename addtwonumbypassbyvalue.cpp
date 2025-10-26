#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    void getInput() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex add(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
};

int main() {
    Complex c1, c2;

    cout << "Enter first complex number:" << endl;
    c1.getInput();

    cout << "\nEnter second complex number:" << endl;
    c2.getInput();

    Complex result = c1.add(c2);

    cout << "\nSum of complex numbers: ";
    result.display();

    return 0;
}