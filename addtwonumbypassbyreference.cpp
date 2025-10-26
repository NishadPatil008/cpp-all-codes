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
0    }+


    void add(const Complex& c1, const Complex& c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.getInput();

    cout << "\nEnter second complex number:" << endl;
    c2.getInput();

    result.add(c1, c2);  // Passing objects by reference

    cout << "\nSum of complex numbers: ";
    result.display();

    return 0;
}