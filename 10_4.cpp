#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[10];
    int top;
public:
    Stack() { top = -1; }

    void push(T val) {
        if (top < 9)
            arr[++top] = val;
        else
            cout << "Stack Overflow!" << endl;
    }

    T pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return 0;
        } else {
            return arr[top--];
        }
    }
};

int main() {
    Stack<int> s;
    int ch;

    while (1) {
        cout << "\n1. Push\n2. Pop\n3. Exit\nEnter choice: ";
        cin >> ch;

        switch (ch) {
            case 1: {
                int val;
                cout << "Enter value to push: ";
                cin >> val;
                s.push(val);
                break;
            }
            case 2: {
                int popped = s.pop();
                if (popped != 0)
                    cout << "Popped: " << popped << endl;
                break;
            }
            case 3:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}