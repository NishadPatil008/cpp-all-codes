#include <iostream>
using namespace std;
class student{
    string name;
    int m1,m2;
    int total;
    public:
    student(){
        name="ABC";
        m1=72;
        m2=90;
        total=200;
    }
    void calc()
    {
        float perc=(float)(m1+m2)/total*100;
        cout<<"Student Name:"<<name<<endl;
        cout<<"Percentage:"<<perc<<endl;
    }
};
int main()
{
    student s1;
    s1.calc();
}