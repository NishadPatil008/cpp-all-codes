#include <iostream>
using namespace std;

template <class T>
class vector {
    T a[100];
    int size;
public:
    vector(int s) {
        size = s;
    }
    void set(int i, T val) {
        if (i >= 0 && i < size) {
            a[i] = val;
        }
        else {
            cout << "Invalid";
        }
    }
    T get(int i) {
        if (i >= 0 && i < size) {
            return a[i];
        }
        else {
            cout << "Invalid";
            return T();
        }
    }
    void disp() {
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> v(5);
    for (int i = 0; i < 5; i++) {
        v.set(i, (i + 1) * 10);
    }
    v.disp();
    v.set(10, 99);
    v.set(3, 99);
    cout << "After modification: ";
    v.disp();
    return 0;
}