#include <iostream>
using namespace std;
class sum{
    int n;
    public:
    sum(){
        n=5;
    }
    void calc()
    {
        int s=0,i;
        for(i=0;i<=n;i++)
        {
            s=s+i;
        }
        cout<<"Sum is:"<<s;
    }
};
int main()
{
    sum s1;
    s1.calc();
}
