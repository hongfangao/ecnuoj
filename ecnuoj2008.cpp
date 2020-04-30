#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int m=0;
    scanf("%d",&m);
    vector<int> v;
    while (m>0)
    {
        int k=0;
        scanf("%d",&k);
        v.push_back(k);
        m--;
    }
    int n=0;
    scanf("%d",&n);
    while (n>0)
    {
        int p=0;
        scanf("%d",&p);
        if(find(v.begin(),v.end(),p)!=v.end())
        {
            cout<<"yes!"<<endl;
        }
        else
        {
            cout<<"no!"<<endl;
        }    
        n--;
    }
    return 0;
}