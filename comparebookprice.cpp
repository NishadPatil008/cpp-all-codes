#include <iostream>
using namespace std;
class book
{
    private:
    string name;
    float id;
    public:
    float price;
    void accept()
    {
    cout<<"Enter book id\n";
    cin>>id;
    cout<<"Enter book name\n";
    cin>>name;
    cout<<"Enter price\n";
    cin>>price;
}
void display()
{
    cout<<"Book id:"<<id;
    cout<<"\nBook name:"<<name;
    cout<<"\nPrice:"<<price;
}
};
int main()
{
    book b1,b2;
    b1.accept();
    b2.accept();
    b1.display();
    b2.display();
    if(b1.price>b2.price)
    cout<<"\n Book 1 price is more";
    else
    cout<<"\n Book 2 price is more";
}
