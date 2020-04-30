#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int gcd(int m,int n)
{
    int a=max(m,n);
    int b=min(m,n);
    int res=b;
    while (b!=0)
    {
        res=a%b;
        a=b;
        b=res;
    }
    return a;
}

int main()
{
    int m=0;
    int n=0;
    scanf("%d %d",&m,&n);
    cout<<gcd(m,n)<<endl;
    return 0;
}