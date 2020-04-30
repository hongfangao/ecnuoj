#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isvalid(vector<int> v)
{
    int signal=-1;
    for (size_t i = 1; i < 31; i++)
    {
        vector<int>::iterator it=find(v.begin(),v.end(),i);
        if(it==v.end())
        {
            signal=1;
        }
    }
    if(signal==1)
    {
        return false;
    }
    return true;
}
int main()
{
    int N=0;
    vector<int> v;
    scanf("%d",&N);
    for (size_t i = 0; i < N; i++)
    {
        int k=0;
        while (~scanf("%d",&k))
        {
            if(k==-1)
            {
                break;
            }
            else
            {
                v.push_back(k);
            }
            
        }
    }
    if(isvalid(v))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}