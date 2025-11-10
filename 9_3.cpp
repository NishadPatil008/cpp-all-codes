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
    int word_count = 0;
    int prev_type = 0;

    while (File.get(ch)) {
        int current_type = ((ch >= 'a' && ch <= 'z') || 
                            (ch >= 'A' && ch <= 'Z') || 
                            (ch >= '0' && ch <= '9')) ? 1 : 0;

        if (current_type == 1 && prev_type == 0) {
            word_count++;
        }
        
        prev_type = current_type;
    }

    cout << "Word count: " << word_count << endl;

    File.close();
    return 0;
}