#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T arr[10];
    int top;
public:
    Stack() 
    { top = -1; }
    void push(T val) {
        if (top < 9)
            arr[++top] = val;
    }
    T pop() {
        if (top == -1)
            return 0;
        else
            return arr[top--];
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    cout << s.pop()<< endl;
    cout << s.pop()<< endl;
    return 0;
}