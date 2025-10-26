#include <iostream>
#include <string>
using namespace std;

class College {
private:
    int roll_no;
    string name;
    string course;

public:
    // Constructor with default course value
    College() {
        course = "Computer Engineering";
    }

    // Accept function to take input
    void accept() {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cin.ignore(); // Optional: prevents getline issues

        cout << "Enter Name: ";
        getline(cin, name);
    }

    // Display function
    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    College student;
    student.accept();
    student.display();

    return 0;
}