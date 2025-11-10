#include <iostream>
#include <string>
using namespace std;

class abc {
public:
    string str;
    void acc() {
        cout << "Enter string: ";
        cin >> str;
    }
    abc operator+(abc s) {
        abc temp;
        temp.str = str + s.str;
        return temp;
    }

    void disp() {
        cout << "Concatenated string: " << str << endl;
    }
};

int main() {
    abc s1, s2, r;
    s1.acc();
    s2.acc();
    r = s1 + s2;
    r.disp();
    return 0;
}