#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n=0;
    scanf("%d",&n);
    vector<int> v;
    while (n>0)
    {
        int k=0;
        scanf("%d",&k);
        v.push_back(k);
        n--;
    }
    sort(v.begin(),v.end());
    int t=0;
    scanf("%d",&t);
    while (t>0)
    {
        int p=0;
        scanf("%d",&p);
        cout<<v[p-1]<<endl;
        t--;
    }
    return 0;
}