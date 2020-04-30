#include<stdio.h>
#include<cmath>
int main()
{
    int a=0;
    int b=0;
    long long res=1;
    scanf("%d %d",&a,&b);
    while (b>0)
    {
        res=a*res;
        b--;
    }
    printf("%lld",res);
    return 0;
}