#include<cmath>
#include<iostream>
using namespace std;
double months(int d,int p,int r)
{
    double m = 0.0;
    m=(log10((p*1.0)/(p*1.0-d*r*1.0)))/(log10(1.0+r*1.0));
    return m;
}
int main()
{
    int d=0;
    int p=0;
    int r=0;
    scanf("%d %d %d",&d,&p,&r);
    int res=(int) months(d,p,r);
    printf("%d\n",res);
    return 0;
}