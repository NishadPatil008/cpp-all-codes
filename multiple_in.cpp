#include <iostream>
using namespace std;
class academic  {
    protected:
    string name;
    int marks;
};
class sports {
    protected:
    int score;
};
class student : protected academic, protected sports {
    int total;

    public:
    void accept() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
        cout << "Enter score: ";
        cin >> score;
        total = marks + score;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Score: " << score << endl;
        cout << "Total: " << total << endl;
    }
};
int main() {
    student s;
    s.accept();
    s.display();
    return 0;
}