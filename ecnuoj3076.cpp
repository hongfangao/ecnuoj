#define ll long long
#include<iostream>
using namespace std;
ll fibo(int n)
{
    ll res=0;
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    ll res1=0;
    ll res2=1;
    for (size_t i = 0; i < n-1; i++)
    {
        res=res1+res2;
        res1=res2;
        res2=res;
    }
    return res;
}
int main()
{
    int T=0;
    scanf("%d",&T);
    for (size_t i = 0; i < T; i++)
    {
        int n=0;
        scanf("%d",&n);
        cout<<"case #"<<i<<":"<<endl;
        cout<<fibo(n)<<endl;
    }
    return 0;
}