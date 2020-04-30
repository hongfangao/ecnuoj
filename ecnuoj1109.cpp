#include<iostream>
#include<vector>
using namespace std;
int maxpartsum(vector<int> v)
{
    int tempsum=0;
    int maxsum=0;
    int signal=-1;
    for (size_t i = 0; i < v.size(); i++)
    {
        if(v[i]>0)
        {
            signal=1;
            break;
        }
    }
    if(signal==-1)
    {
        int maxv=v[0];
        for (size_t i = 0; i < v.size(); i++)
        {
            if(maxv<v[i])
            {
                maxv=v[i];
            }
        }
        return maxv;
    }
    for (size_t i = 0; i < v.size(); i++)
    {
        tempsum+=v[i];
        if(tempsum<=0)
        {
            tempsum=0;
        }
        if(tempsum>maxsum)
        {
            maxsum=tempsum;
        }
    }
    return maxsum;
}
int main()
{
    int T=0;
    scanf("%d",&T);
    for (size_t i = 0; i < T; i++)
    {
        int t=0;
        scanf("%d",&t);
        vector<int> v;
        for (size_t i = 0; i < t; i++)
        {
            int m=0;
            scanf("%d",&m);
            v.push_back(m);
        }
        cout<<maxpartsum(v)<<endl;
    }
    
}