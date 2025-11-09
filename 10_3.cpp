#include <iostream>
using namespace std;

template <class T>
class Calculator {
public:
    T add(T a, T b) { return a + b; }
    T sub(T a, T b) { return a - b; }
    T mul(T a, T b) { return a * b; }
    T div(T a, T b) { return (b == 0) ? 0 : a / b; }
    T mod(T a, T b) { return (b == 0) ? 0 : a % b; }
    T max(T a, T b) { return (a > b) ? a : b; }
    T min(T a, T b) { return (a < b) ? a : b; }
    T square(T a) { return a * a; }
    T avg(T a, T b) { return (a + b) / 2; }
    T cube(T a) { return a * a * a; }
};

int main() {
    Calculator<int> c;
    int ch;

    while (1) {
        cout << "\nEnter choice:\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
        cout << "5. Modulus\n6. Maximum\n7. Minimum\n8. Square\n";
        cout << "9. Average\n10. Cube\n 11.Exit\n";
        cout << "Choice: ";
        cin >> ch;

        switch (ch) {
            case 1: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << c.add(a, b) << endl;
                break;
            }
            case 2: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << c.sub(a, b) << endl;
                break;
            }
            case 3: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << c.mul(a, b) << endl;
                break;
            }
            case 4: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << c.div(a, b) << endl;
                break;
            }
            case 5: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << c.mod(a, b) << endl;
                break;
            }
            case 6: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << c.max(a, b) << endl;
                break;
            }
            case 7: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << c.min(a, b) << endl;
                break;
            }
            case 8: {
                int a;
                cout << "Enter number: ";
                cin >> a;
                cout << "Result: " << c.square(a) << endl;
                break;
            }
            case 9: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << c.avg(a, b) << endl;
                break;
            }
            case 10: {
                int a;
                cout << "Enter number: ";
                cin >> a;
                cout << "Result: " << c.cube(a) << endl;
                break;
            }
            case 11: {
                return 0;
            }
            default:
                cout << "Invalid choice or exit requested. Goodbye!\n";
                return 0;
        }
    }

    return 0;
}