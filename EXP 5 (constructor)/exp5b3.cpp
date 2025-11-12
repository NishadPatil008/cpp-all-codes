#include <iostream>
using namespace std;
class student{
    string name;
    int m1,m2;
    int total;
    public:
    student(string n,int mu1,int mu2,int t){
        name=n;
        m1=mu1;
        m2=mu2;
        total=t;
    }
    student(student &st){
        name=st.name;
        m1=st.m1;
        m2=st.m2;
        total=st.total;
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
    student s1("ABC",90,90,200);
    student s2(s1);
    s1.calc();
    s2.calc();
}