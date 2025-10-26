#include <iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll;
    public:
    void accept()
    {
    cout<<"Enter student name\n";
    cin>>name;
    cout<<"Enter roll no\n";
    cin>>roll;
}
void display()
{
    cout<<"Student name:"<<name;
    cout<<"\nRoll no:"<<roll;
}
};
int main()
{
    student s1;
    s1.accept();
    s1.display();
}