#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
struct frac
{
    int up=-1;
    int down=-1;
};
int gcd(int a,int b)
{
    int c=max(a,b);
    int d=min(a,b);
    while (c%d!=0)
    {
        int temp=d;
        d=c%d;
        c=temp;
    }
    return d;
}
int num(vector<int> v)
{
    set<frac> s;
    set<int> nums;
    for (size_t i = 0; i < v.size(); i++)
    {
        nums.insert(v[i]);
    }
    vector<int> nv;
    for(set<int>::iterator sit=nums.begin();sit!=nums.end();sit++)
    {
        nv.push_back(*sit);
    }
    sort(nv.begin(),nv.end());
    for(int i=0;i<nv.size();i++)
    {
        for(int j=i+1;j<nv.size();j++)
        {
            frac f;
            if(gcd(nv[i],nv[j])==1)
            {
                f.down=nv[j];
                f.up=nv[i];
                s.insert(f);
            }
            else
            {
                f.down=nv[j]/gcd(nv[i],nv[j]);
                f.up=nv[i]/gcd(nv[i],nv[j]);
                s.insert(f);
            }
            
        }
    }
    return s.size();
}
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
            int a=0;
            scanf("%d",&a);
            v.push_back(a);
            n--;
        }
        cout<<"case #"<<i<<":"<<endl;
        cout<<num(v)<<endl;
    }
    return 0;
}