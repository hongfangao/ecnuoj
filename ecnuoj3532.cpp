#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
bool isone(int n)
{
    int k=2*(n-1);
    double sx=(-1+sqrt(1+4*k))/2.0;
    if(int(sx)==sx)
    {
        return true;
    }
    return false;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    while (n>0)
    {
        int t;
        scanf("%d",&t);
        printf("%d\n",isone(t));
        n--;
    }
    return 0;
}