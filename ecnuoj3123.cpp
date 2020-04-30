#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void solve(int a,int b,int c)
{
    int delta=b*b-4*a*c;
    double res=0.0;
    double res1=0.0;
    if(delta==0)
    {
        res=(-b*1.0)/(2.0*a);
        printf("%f\n",res);
    }
    if(delta>0)
    {
        res=(-b*1.0+sqrt(delta))/(2.0*a);
        res1=(-b*1.0-sqrt(delta))/(2.0*a);
        double s1=max(res,res1);
        double s2=min(res,res1);
        printf("%f %f\n",s2,s1);
    }
}
int main()
{
    int a=0;
    int b=0;
    int c=0;
    while (~scanf("%d %d %d",&a,&b,&c))
    {
        solve(a,b,c);
    }
    return 0;
}