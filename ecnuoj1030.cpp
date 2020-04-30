#include<stdio.h>
#include<iostream>
using namespace std;
int cow(int n)
{
    int res=0;
    if(n<4)
    {
        res=1;
    }
    else
    {
        res=cow(n-1)+cow(n-3);
    }
    return res;
}
int main()
{
    while (true)
    {
        int n=0;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            printf("%d\n",cow(n));
        }
    }
    return 0;
}