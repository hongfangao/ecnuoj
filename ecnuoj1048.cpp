#define ll long long
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(ll a,ll b)
{
    return a<b;
}
ll min_wait_time(vector<ll> v)
{
    ll sumtime=0;
    for (size_t i = 0; i < v.size(); i++)
    {
        sumtime+=v[i]*(v.size()-1-i);
    }
    return sumtime;
}
int main()
{
    int N=0;
    scanf("%d",&N);
    for (size_t i = 0; i < N; i++)
    {
        int n=0;
        scanf("%d",&n);
        vector<ll> v;
        for (size_t j = 0; j < n; j++)
        {
            ll t=0;
            scanf("%lld",&t);
            v.push_back(t);
        }
        sort(v.begin(),v.end(),cmp);
        cout<<min_wait_time(v)<<endl;
    }
    return 0;
}