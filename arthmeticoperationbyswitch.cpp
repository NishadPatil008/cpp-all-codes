#include<iostream>
using namespace std;

int main () 
{
    float a,b;
    char ope;

    cout<<"Enter operator(+,-,/,*):";
    cin>>ope;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;

    switch (ope) 
    {
        case '+':cout << "Sum is "<<a+b;
            break;
        case '-':cout << "Difference is "<<a-b;
            break;
        case '*':cout << "Product is "<<a*b;
            break;
        case '/':if (b!=0)
                cout << "Division is "<<a/b;
            else
                cout << "Can't divide by zero";
            break;
        
    }

    return 0;
}
