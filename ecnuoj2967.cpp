#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> commonele(vector<int> v1,vector<int> v2,vector<int> v3)
{
    vector<int> v;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    int lower=max(v1[0],max(v2[0],v3[0]));
    int upper=min(v1[v1.size()-1],min(v2[v2.size()-1],v3[v3.size()-1]));
    for(int i=lower;i<=upper;i++)
    {
        vector<int>::iterator it1,it2,it3;
        it1 = find(v1.begin(),v1.end(),i);
        it2 = find(v2.begin(),v2.end(),i);
        it3 = find(v3.begin(),v3.end(),i);
        if(it1!=v1.end()&&it2!=v2.end()&&it3!=v3.end())
        {
            v.push_back(i);
        }
    }
    return v;
}
int main()
{
    int i=0;
    scanf("%d",&i);
    for(int j=0;j<i;j++)
    {
        int nv1=0,nv2=0,nv3=0;
        scanf("%d %d %d",&nv1,&nv2,&nv3);
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        while (nv1>0)
        {
            int k=0;
            scanf("%d",&k);
            v1.push_back(k);
            nv1--;
        }
        while(nv2>0)
        {
            int k=0;
            scanf("%d",&k);
            v2.push_back(k);
            nv2--;
        }
        while(nv3>0)
        {
            int k=0;
            scanf("%d",&k);
            v3.push_back(k);
            nv3--;
        }
        vector<int> rv=commonele(v1,v2,v3);
        cout<<"case #"<<j<<":"<<endl;
        if(rv.size()!=0)
        {
            for(int j=0;j<rv.size();j++)
            {
                if(j==rv.size()-1)
                {
                    cout<<rv[j]<<endl;
                }
                else
                {
                    cout<<rv[j]<<" ";
                }
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }    
}