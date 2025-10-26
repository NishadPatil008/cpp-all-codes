#include <iostream>
using namespace std;
class staff 
{
string name,post;
public:
void accept() 
{
    cout<<"Enter Staff Name: ";
    cin>>name;
    cout<<"Enter Staff Post: ";
    cin>>post; 
}
void display() 
{
    cout<<"\nStaff Name: "<<name<<"\nStaff Post: "<< post<<endl;
    if (post=="HOD"|| post=="hod") 
    {
        cout<<name<<" is Head of Department.\n";
    }
    else
    {
    cout<<name<<" is a staff.\n";
    }

}
};
int main() 
{
    staff s[5]; 
    int i; 
    for(i=0;i<5;i++) 
    {
        s[i].accept();
    }
    for(i=0;i<5;i++) 
    {
        s[i].display();
    }
    return 0;
}