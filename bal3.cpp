#include <iostream>
using namespace std;
class acc 
{
int acc;
float bal,bon=0;
public:
void accept() 
{
    cout<<"Enter Account Number: ";
    cin>>acc;
    cout<<"Enter Balance: ";
    cin>>bal; 
}
void calculateBonus() 
{
    if (bal>=5000) 
    {
        bon=bal*10/100;
    } 
    else 
    {
        bon=0;
    }
}
void display() 
{
    cout<<"\nAccount No.: "<<acc;
    cout<<"\nBalance: "<<bal;
    cout<<"\nBonus: "<<bon;
    cout<<"\nTotal (Balance+Bonus):"<<bal+bon<<endl;
    }
};
int main() 
{
    acc a[10]; 
    int i; 
    for(i=0;i<10;i++) 
    {
        a[i].accept();
    }
    for(i=0;i<10;i++) 
    {
        a[i].calculateBonus();
    }
    for(i=0;i<10;i++) 
    {
        a[i].display();
    }
    return 0;
}