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
bool isprime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(size_t i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
} 
int main()
{
    int T=0;
    scanf("%d",&T);
    int countT=0;
    while(T>0)
    {
        int a=0;
        int b=0;
        scanf("%d %d",&a,&b);
        cout<<"case #"<<countT<<":"<<endl;
        if(gcd(a,b)==1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            int j=0;
            int res=0;
            for(j=2;j<=gcd(a,b);j++)
            {
                if(isprime(j)&&gcd(a,b)%j==0)
                {
                    res=j;
                    break;
                }
            }
            cout<<"Yes"<<" "<<res<<endl;
        }
        T--;
        countT++;
    }
    return 0;
}