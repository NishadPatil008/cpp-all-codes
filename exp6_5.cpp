#include <iostream>
using namespace std;
class teacher {
protected:
    string name;
    string age;
public:
    void accept() {
        cout << "Enter teacher name: ";
        cin >> name;
        cout << "Enter teacher age: ";
        cin >> age;
    }
    void display() {
        cout << "Teacher Name: " << name << endl;
        cout << "Teacher Age: " << age << endl;
    }
};

class student : public teacher {
protected:
    int roll;
    string sname;
public:
    void saccept() {
        cout << "Enter student name: ";
        cin >> sname;
        cout << "Enter roll number: ";
        cin >> roll;
    }
    void sdisplay() {
        cout << "Student Name: " << sname << endl;
        cout << "Roll Number: " << roll << endl;
    }
};

class marks : public student {
protected:
    int m1, m2, m3;
public:
    void maccept() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    void mdisplay() {
        cout << "Marks in subject 1: " << m1 << endl;
        cout << "Marks in subject 2: " << m2 << endl;
        cout << "Marks in subject 3: " << m3 << endl;
    }
};

class academics : public marks {
public:
    int totalmarks() {
        return m1 + m2 + m3;
    }
};

int main() {
    academics a;
    a.accept();      
    a.saccept();      
    a.maccept();   
    a.display();      
    a.sdisplay();     
    a.mdisplay();    

    int total = a.totalmarks();
    cout << "Total Marks: " << total << endl;

    return 0;
}