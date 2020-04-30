#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> getdigit(int n)
{
    vector<int> v;
    if(n==0)
    {
        v.push_back(0);
    }
    else
    {
        vector<int> rv;
        while (n!=0)
        {
            rv.push_back(n%10);
            n=n/10;
        }
        vector<int>::reverse_iterator ri=rv.rbegin();
        for(ri=rv.rbegin();ri!=rv.rend();ri++)
        {
            v.push_back(*(ri));
        }
    }
    return v;
}
bool cmp(int a,int b)
{
    vector<int> va=getdigit(a);
    vector<int> vb=getdigit(b);
    int i=0;
    for(i=0;i<min(va.size(),vb.size());i++)
    {
        if(va[i]!=vb[i])
        {
            return va[i]>vb[i];
        }
    }
    if(i==va.size())
    {
        return b>a;
    }
    return a>b;
}
int main()
{
    vector<int> v;
    int n=0;
    scanf("%d",&n);
    while (n>0)
    {
        int k=0;
        scanf("%d",&k);
        v.push_back(k);
        n--;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    return 0;
}