#define ll long long
#include<iostream>
#include<vector>
using namespace std;
ll num(int n)
int number(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n%2==0)
    {
        return 9;
    }
    if(n%2!=0)
    {
        return 10;
    }
}
int main()
{
    ll n=0;
    while (~scanf("%lld",&n))
    {
        long long sum=0;
        for (ll i = 1; i <= n; i++)
        {
            sum+=number(i);
        }
        cout<<sum<<endl;
    }
    return 0;
}