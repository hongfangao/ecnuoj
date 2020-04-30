#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int N=0;
    scanf("%d",&N);
    set<int> s;
    vector<int> v;
    while (N>0)
    {
        int k=0;
        scanf("%d",&k);
        s.insert(k);
        N--;
    }
    for (set<int>::iterator i = s.begin(); i != s.end(); i++)
    {
        v.push_back(*i);
    }
    sort(v.begin(),v.end());
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
    return 0;
}