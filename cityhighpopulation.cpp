#include<iostream>
using namespace std;

class city {
private:
    string name;

public:
    int population;
    void accept() {
        cout<<"Enter name of city:";
        cin>>name;
        cout<<"Enter population:";
        cin>>population;
    }

    void display() {
        cout<<"Name of city:"<<name;
        cout<<"Population:"<<population;
    }
    
};

int main() {
    city c[5];
    int i,max=0;
    for(int i=0;i<5;i++) 
    {
        c[i].accept();
    }
   

    for(int i=1;i<5;i++) {
        if(c[i].population>c[max].population) 
        {
            max=i;
        }
    }
    cout<<"\nCity with highest population\n";
    c[max].display();
}