#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> getdigit(int n)
{
    vector<int> v;
    while (n>0)
    {
        v.push_back(n%10);
        n=n/10;
    }
    vector<int> rv;
    for (int i = v.size()-1; i >= 0; i--)
    {
        rv.push_back(v[i]);
    }
    return rv;  
}
int lenofdigit(int n)
{
    vector<int> v=getdigit(n);
    return v.size();
}
vector<int> movR(int n,int m)
{
    vector<int> rv;
    int len=lenofdigit(n);
    m=m%len;
    vector<int> dv=getdigit(n);
    for(int i=len-m;i<dv.size();i++)
    {
        rv.push_back(dv[i]);
    }
    for(int i=0;i<len-m;i++)
    {
        rv.push_back(dv[i]);
    }
    return rv;
}
int main()
{
    int n=0;
    int m=0;
    scanf("%d %d",&n,&m);
    int r1=lenofdigit(n);
    vector<int> v=movR(n,m);
    cout<<r1<<" ";
    int k=0;
    while (k<v.size())
    {
        if(v[k]==0)
        {
            k++;
        }
        else
        {
            break;
        }
    }
    
    for (size_t i = k; i < v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}