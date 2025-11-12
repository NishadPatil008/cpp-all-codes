#include <iostream>
using namespace std;
class sum{
    int no;
    public:
    sum(int n){
        no=n;
    }
    sum(sum &su)
    {
        no=su.no;
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
    sum s2(s1);
    s1.calc();
}