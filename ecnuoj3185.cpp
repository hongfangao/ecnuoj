#include<iostream>
#include<cmath>
using namespace std;
int counti(int i,int m)
{
    int ci=0;
    while (m%i==0)
    {
        ci++;
        m=m/i;
    }
    return ci;
}
void solve(int m,int n,int i)
{
    int oe=n%2;
    int countm=0;
    for (size_t i = 1; i <= n; i++)
    {
        if(i%m==0&&i%2==oe)
        {
            countm=countm+counti(m,i);
        }
    }
    cout<<"case #"<<i<<":"<<endl;
    cout<<countm<<endl;
}
int main()
{
    int T=0;
    scanf("%d",&T);
    for (size_t i = 0; i < T; i++)
    {
        int m=0;
        int n=0;
        scanf("%d %d",&n,&m);
        solve(m,n,i);
    }
    return 0;
}
