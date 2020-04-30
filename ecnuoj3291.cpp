#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct p
{
    int x=0;
    int y=0;
};
bool isprime(int n)
{
    for (size_t i = 2; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int numofp(int x,int y)
{
    int sum=0;
    for (size_t i = x; i < y+1; i++)
    {
        if(isprime(i))
        {
            sum++;
        }
    }
    return sum;
}
bool cmp(p p1,p p2)
{
    if(numofp(p1.x,p1.y)!=numofp(p2.x,p2.y))
    {
        return numofp(p1.x,p1.y)<numofp(p2.x,p2.y);
    }
    if(p1.x!=p2.x)
    {
        return p1.x<p2.x;
    }
    return p1.y<p2.y;
}
int main()
{
    int T=0;
    scanf("%d",&T);
    for (size_t i = 0; i < T; i++)
    {
        vector<p> v;
        int n=0;
        scanf("%d",&n);
        cout<<"case #"<<i<<":"<<endl;
        while (n>0)
        {
            p np;
            scanf("%d %d",&np.x,&np.y);
            v.push_back(np);
            n--;
        }
        sort(v.begin(),v.end(),cmp);
        for (size_t i = 0; i < v.size();i++)
        {
            cout<<v[i].x<<" "<<v[i].y<<endl;
        }
    }
    return 0;
}