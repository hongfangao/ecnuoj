#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool iswf(int n)
{
    int d=n;
    int d1=n/100;
    n=n%100;
    int d2=n/10;
    n=n%10;
    if(pow(d1,3)+pow(d2,3)+pow(n,3)==d)
    {
        return true;
    }
    return false;
}
int main()
{
    int i=100;
    for(i=100;i<1000;i++)
    {
        if(iswf(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}