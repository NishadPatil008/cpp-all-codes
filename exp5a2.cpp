#include <iostream>
using namespace std;
class sum{
    int no;
    public:
    sum(int n){
        no=n;
    }
    void calc()
    {
        int s=0,i;
        for(i=0;i<=no;i++)
        {
            s=s+i;
        }
        cout<<"Sum is:"<<s;
    }
};
int main()
{
    sum s1(5);
    s1.calc();
}