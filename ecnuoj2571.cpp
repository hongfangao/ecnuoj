#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
    int c=max(a,b);
    int d=min(a,b);
    int t=0;
    while (c%d!=0)
    {
        t=c%d;
        c=d;
        d=t;
    }
    return d;
}
int lcm(int a,int b)
{
    int r=(a*b)/gcd(a,b);
    return r;
}
int main()
{
    int k=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        int a=0,b=0;
        scanf("%d %d",&a,&b);
        printf("%d %d\n",gcd(a,b),lcm(a,b));
    }
    return 0;
}