#define ll long long
#include<iostream>
#include<algorithm>
using namespace std;
ll energy(ll x,ll y)
{
    ll sum=0;
    ll a=min(x,y);
    ll b=max(x,y);
    while (a>1)
    {
        ll times=b/a;
        sum=sum+4*times*a;
        ll remain=b%a;
        b=a;
        a=remain;
    }
    if(a!=0)
    {
        sum=sum+4*b;
    }
    return sum;
}
int main()
{
    ll x=0;
    ll y=0;
    scanf("%lld %lld",&x,&y);
    cout<<energy(x,y)<<endl;
    return 0;
}