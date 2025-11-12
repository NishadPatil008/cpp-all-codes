#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream f1, f2;
    char ch;

    f1.open("First.txt", ios::in);
    f2.open("Second.txt", ios::out);

    while (f1.get(ch)) {
        f2.put(ch);
    }

    cout << "File copied successfully." << endl;

    f1.close();
    f2.close();
    return 0;
}