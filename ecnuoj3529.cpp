#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int combine(int a,int b)
{
    int result=0;
    if(a==0)
    {
        result=1;
    }
    else
    {
        int it1=0;
        long long result1=1;
        long long result2=1;
        while(it1<a)
        {
            result1=result1*b;
            b--;
            it1++;
        }
        while (a>0)
        {
            result2=result2*a;
            a=a-1;
        }
        result=result1/result2;
    }
    return result;
}
vector<int> cal_combine(int n)
{
    vector<int> V;
    for(int it1=0;it1<=n;++it1)
    {
        V.push_back(combine(it1,n));
    }
    return V;
}
int main()
{
    int n;
    cin>>n;
    int it=0;
    while (it<n)
    {
        vector<int> V=cal_combine(it);
        int len=V.size();
        for(int it2=0;it2<len;++it2)
        {
            if(it2==len-1)
            {
                cout<<V[it2]<<endl;
            }
            else
            {
                cout<<V[it2]<<" ";
            }
        }
        it++;
    }
    return 0;
}