#include<iostream>
#include<string>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(string a,string b)
{
    set<char> sa;
    set<char> sb;
    for(string::iterator ia=a.begin();ia!=a.end();ia++)
    {
        sa.insert(*ia);
    }
    for(string::iterator ib=b.begin();ib!=b.end();ib++)
    {
        sb.insert(*ib);
    }
    if(sa.size()!=sb.size())
    {
        return sa.size()>sb.size();
    }
    return a<b;
}
int main()
{
    int k=0;
    scanf("%d",&k);
    for (size_t i = 0; i < k; i++)
    {
        int t=0;
        scanf("%d",&t);
        vector<string> v;
        for(size_t j=0;j<t;j++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end(),cmp);
        cout<<"case #"<<i<<":"<<endl;
        for (size_t i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<endl;
        }
        
    }
    return 0;
}