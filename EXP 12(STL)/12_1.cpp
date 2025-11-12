#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;
    
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    }
    
    return 0;
}