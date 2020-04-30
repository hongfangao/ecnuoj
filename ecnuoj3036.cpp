#define ll long long
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int numof1(ll n)
{
    int num=0;
    while (n)
    {
        num++;
        n=(n-1)&n;
    }
    return num;
}
bool cmp(ll a,ll b)
{
    if(numof1(a)!=numof1(b))
    {
        return numof1(a)>numof1(b);
    }
    return a<b;
}
int main()
{
    int N=0;
    scanf("%d",&N);
    int countN=0;
    while (N>0)
    {
        int k=0;
        scanf("%d",&k);
        vector<ll> kv;
        while (k>0)
        {
            ll t=0;
            scanf("%lld",&t);
            kv.push_back(t);
            k--;
        }
        sort(kv.begin(),kv.end(),cmp);
        cout<<"case #"<<countN<<":"<<endl;
        for (size_t i = 0; i < kv.size(); i++)
        {
            if(i==kv.size()-1)
            {
                cout<<kv[i];
            }
            else
            {
                cout<<kv[i]<<" ";
            }
        }
        cout<<endl;
        N--;
        countN++;
    }
    return 0;
}