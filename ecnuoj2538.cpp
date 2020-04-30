#include<iostream>
#include<vector>
using namespace std;
vector<int> getfactors(int n)
{
    vector<int> v;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
        }
    }
    return v;
}
bool isperfect(int n)
{
    vector<int> v=getfactors(n);
    int sum=0;
    for (size_t i = 0; i < v.size(); i++)
    {
        sum=sum+v[i];
    }
    if(sum==n)
    {
        return true;
    }
    return false;
}
int main()
{
    for (size_t i = 1; i < 4001; i++)
    {
        if(isperfect(i))
        {
            cout<<i<<" its factors are ";
            vector<int> v=getfactors(i);
            for (size_t i = 0; i < v.size(); i++)
            {
                if(i==v.size()-1)
                {
                    cout<<v[i]<<endl;
                }
                else
                {
                    cout<<v[i]<<" ";
                }
            }
            
        }
    }
    return 0;
}