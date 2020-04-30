#include<set>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int minm(vector<int> v)
{
    sort(v.begin(),v.end());
    int maxv = v[v.size()-1];
    int signal = 1;
    int result=0;
    for(int i=0;i<maxv;i++)
    {
        set<int> modv;
        int setsize=0;
        signal = 1;
        for(int j=0;j<v.size();j++)
        {
            modv.insert(v[j]%i);
            if(setsize==modv.size())
            {
                break;
                signal = 0;
            }
        }
        if(signal==1)
        {
            result = i;
            break;
        }
    }
    return result;
}
int main()
{
    int t=0;
    while (~scanf("%d",&t))
    {
        vector<int> v;
        for(int i=0;i<t;i++)
        {
            int k=0;
            scanf("%d",&k);
            v.push_back(k);
        }
        cout<<minm(v)<<endl;
    }
    return 0;
}