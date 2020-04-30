#include<stdio.h>
#include<cmath>
int main()
{
    int a=0;
    int b=0;
    double c=0.0;
    scanf("%d %d",&a,&b);
    c=sqrt(a*a+b*b);
    printf("%.3f",c);
    return 0;
}