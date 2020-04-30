#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int convert(int u,int p,int n)
{
    vector<int> rv;
    while (u!=0)
    {
        rv.push_back(u%2);
        u=u/2;
    }
    for (size_t i = p; i > p-n; i--)
    {
        rv[i]=!rv[i];
    }
    int re=0;
    for (size_t i = 0; i < rv.size(); i++)
    {
        re+=rv[i]*pow(2,i);
    }
    return re;
}
int main()
{
    int u,p,n;
    scanf("%d %d %d",&u,&p,&n);
    cout<<convert(u,p,n)<<endl;
    return 0;
}