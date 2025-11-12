#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream File;
    File.open("File.txt", ios::in);

    if (!File) {
        cout << "Unable to open file";
        return 1;
    }

    char ch;
    int digit_count = 0, space_count = 0;

    while (File.get(ch)) {
        if (ch >= '0' && ch <= '9') {
            digit_count++;
        }
        else if (ch == ' ') {
            space_count++;
        }
    }

    cout << "Digits: " << digit_count << endl;
    cout << "Spaces: " << space_count << endl;

    File.close();
    return 0;
}