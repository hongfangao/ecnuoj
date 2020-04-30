#define ll long long
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
ll nthk(int k,int n)
{
    vector<int> v;
    while (n>0)
    {
        v.push_back(n%2);
        n=n/2;
    }
    vector<int>::iterator it=v.begin();
    ll re=0;
    int count=0;
    for(it=v.begin();it!=v.end();it++)
    {
        re=re+(*it)*pow(k,count);
        count=count+1;
    }
    return re;
}
int main()
{
    int k=0;
    int n=0;
    scanf("%d %d",&k,&n);
    cout<<nthk(k,n)<<endl;
    return 0;
}