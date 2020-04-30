#include<iostream>
#include<cmath>
using namespace std;
int cal(int x)
{
    if(x<1)
    {
        return x;
    }
    if(x<10)
    {
        return 2*x-1;
    }
    return 3*x-11;
}
int main()
{
    int x=0;
    while (~scanf("%d",&x))
    {
        cout<<cal(x)<<endl;
    }
    return 0;
}