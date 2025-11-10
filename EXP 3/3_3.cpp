#include <iostream>
using namespace std;

class Outer {
public:
    void display() {
        cout << "This is the Outer class" << endl;
    }
    class Inner {
    public:
        void show() {
            cout << "This is the Inner (Nested) class" << endl;
        }
    };
};

int main() {
    Outer obj;
    obj.display();
    Outer::Inner obj2;
    obj2.show();
    return 0;
}
