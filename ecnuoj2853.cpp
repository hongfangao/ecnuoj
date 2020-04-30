#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
void printset(set<int> s)
{
    if(s.size()==0)
    {
        cout<<"{}";
    }
    else
    {
        cout<<"{";
        vector<int> v;
        for(set<int>::iterator it=s.begin();it!=s.end();it++)
        {
            v.push_back(*it);
        }
        for(int i=0;i<v.size();i++)
        {
            if(i==v.size()-1)
            {
                cout<<v[i];
            }
            else
            {
                cout<<v[i]<<",";
            }
        }
        cout<<"}";
    }
}
int main()
{
    set<int> sa;
    set<int> sb;
    int na=0;
    int nb=0;
    scanf("%d %d", &na,&nb);
    for(int i=0;i<na;i++)
    {
        int t=0;
        scanf("%d",&t);
        sa.insert(t);
    }
    for(int j=0;j<nb;j++)
    {
        int t=0;
        scanf("%d",&t);
        sb.insert(t);
    }
    set<int> setintersection;
    set_intersection(sa.begin(),sa.end(),sb.begin(),sb.end(),inserter(setintersection,setintersection.begin()));
    set<int> setunion;
    set_union(sa.begin(),sa.end(),sb.begin(),sb.end(),inserter(setunion,setunion.begin()));
    set<int> setdifference;
    set_difference(sa.begin(),sa.end(),sb.begin(),sb.end(),inserter(setdifference,setdifference.begin()));
    printset(setintersection);
    cout<<endl;
    printset(setunion);
    cout<<endl;
    printset(setdifference);
    cout<<endl;
    return 0;
}