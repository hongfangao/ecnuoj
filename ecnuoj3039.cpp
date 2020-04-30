#define ll long long
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int maxd(ll n)
{
    vector<int> v;
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    {
        n=n*(-1);
    }
    while (n!=0)
    {
        v.push_back(n%10);
        n=n/10;
    }
    return v[v.size()-1];
}
bool cmp(ll a,ll b)
{
    if(maxd(a)==maxd(b))
    {
        return a<b;
    }
    return maxd(a)>maxd(b);
}
int main()
{
    int n;
    scanf("%d",&n);
    int p=n;
    while (n>0)
    {
        int k;
        scanf("%d",&k);
        vector<ll> v;
        while (k>0)
        {
            ll s;
            scanf("%lld",&s);
            v.push_back(s);
            k--;
        }
        sort(v.begin(),v.end(),cmp);
        cout<<"case #"<<p-n<<":"<<endl;
        for (size_t i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        n--;
    }
    return 0;
}