#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int countpp(int t)
{
    int r=0;
    for(int i=1;i<=t;i++)
    {
        if(isprime(i)&&isprime(t-i+1))
        {
            r++;
        }
    }
    return r;
}
int main()
{
    int k=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        int t=0;
        scanf("%d",&t);
        printf("%d\n",countpp(t));
    }
    return 0;
}