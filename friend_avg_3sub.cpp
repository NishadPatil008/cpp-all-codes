#include <iostream>
using namespace std;

class Student {
    string name;
    int m1, m2, m3;
public:
    Student(string n, int a, int b, int c) : name(n), m1(a), m2(b), m3(c) {}
    friend void calculateAverage(Student);
};

void calculateAverage(Student s) {
    float avg = (s.m1 + s.m2 + s.m3) / 3 ;
    cout << "Average marks of " << s.name << ": " << avg << endl;
}

int main() {
    Student s("Sandesh", 90, 93, 91);
    calculateAverage(s);
    return 0;
}