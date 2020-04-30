#define ll long long
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<ll> t2b(ll n)
{
    vector<ll> v;
    if(n==0)
    {
        v.push_back(0);
    }
    while (n!=0)
    {
        v.push_back(n%2);
        n=n/2;
    }
    return v;
}
int count1(ll n)
{
    vector<ll> v=t2b(n);
    int num1=count(v.begin(),v.end(),1);
    return num1;
}
int gcd(int a,int b)
{
    if(a==0||b==0)
    {
        return 1;
    }
    int c=max(a,b);
    int d=min(a,b);
    while (c%d!=0)
    {
        int temp=c%d;
        c=d;
        d=temp;
    }
    return d;
}
int main()
{
    ll a=0;
    scanf("%lld",&a);
    cout<<count1(a)<<","<<count1(a)/gcd(count1(a),32)<<":"<<32/gcd(count1(a),32)<<endl;
    return 0;
}