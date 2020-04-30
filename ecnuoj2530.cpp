#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool iszero(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
                if(v[i]+v[j]+v[k]==0)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        int m=0;
        scanf("%d",&m);
        for(int j=0;j<m;j++)
        {
            int t=0;
            scanf("%d",&t);
            v.push_back(t);
        }
        if(iszero(v))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}