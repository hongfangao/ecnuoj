#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int T=0;
    scanf("%d",&T);
    for (size_t i = 0; i < T; i++)
    {
        int n=0;
        scanf("%d",&n);
        vector<int> v;
        while (n>0)
        {
            int k;
            scanf("%d",&k);
            v.push_back(k);
            n--;
        }
        vector<int> tv;
        for (size_t j = 0; j < v.size(); j++)
        {
            tv.push_back(count(v.begin(),v.end(),v[j]));
        }
        sort(tv.begin(),tv.end());
        cout<<"case #"<<i<<":"<<endl;
        cout<<tv[tv.size()-1]<<endl;
    }
    return 0;
}
