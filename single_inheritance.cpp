#include <iostream>
using namespace std;
class person {
    protected:
    string name;
    int age;
};
class student : protected person {
    int roll_no;
    public:
    void setdata(string n, int a, int r) {
        name = n;
        age = a; 
        roll_no = r;
    }
    void display() {
        cout << "Name: " <<name<< endl; 
        cout << "Age: " <<age<< endl;   
        cout << "Roll No: " << roll_no << endl;
    }
};
int main() {
    student s;
    s.setdata("Mb", 20, 101);
    s.display();
    return 0;
}