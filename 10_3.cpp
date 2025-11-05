#include <iostream>
using namespace std;
template <typename T>
class Calculator {
public:
    T add(T a, T b) { 
    return a + b;
    }
    T sub(T a, T b) { 
    return a - b; 
    }
    T mul(T a, T b) { 
    return a * b; 
    }
    T div(T a, T b) {
    if (b==0) 
    return 0;
    else 
    return a/b;
    }
};
int main() {
    Calculator<int> c;
    int a, b, ch;
    while (1) {
        cout << "Enter choice: ";
        cin >> ch;
        if (ch == 0) 
        break;
        cin >> a >> b;
        switch (ch) {
            case 1: 
            cout << c.add(a, b) << endl; 
            break;
            case 2: 
            cout << c.sub(a, b) << endl; 
            break;
            case 3: 
            cout << c.mul(a, b) << endl; 
            break;
            case 4: 
            cout << c.div(a, b) << endl; 
            break;
        }
    }
}