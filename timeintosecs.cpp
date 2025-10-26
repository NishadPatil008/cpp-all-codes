#include <iostream>
using namespace std;
class Time 
{
public:
    float hr, min, sec;
    float sum; 
    void accept() 
    {
        cout<<"Enter hour: ";
        cin>>hr;
        cout<<"Enter minutes: ";
        cin>>min;
        cout<<"Enter seconds: ";
        cin>>sec;
    }
    void display() 
    {
        cout<<"Hour: "<<hr<<"\n";
        cout<<"Minutes: "<<min<< "\n";
        cout<<"Seconds: "<<sec<<"\n";
    }
    void tosecond() 
    {
        sum=hr*3600 + min*60 + sec;
        cout<<"Total seconds: "<<sum<<"\n";
    }
};
int main() 
{
    Time t1;
    t1.accept();
    t1.display();
    t1.tosecond();
    return 0;
}
