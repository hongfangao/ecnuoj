#include<iostream>
#include<stdio.h>
using namespace std;
int solve5(int k)
{
    int res=0;
    if(k>=625)
    {
        res=res+k/5+k/25+k/125+k/625;
    }
    else
    {
        if(k>=125)
        {
            res=res+k/5+k/25+k/125;
        }
        else
        {
            if(k>=25)
            {
                res=res+k/5+k/25;
            }
            else
            {
                if(k>=5)
                {
                    res=res+k/5;
                }
                else
                {
                    res=res;
                }
            }
        }
    }
    return res;
}
int main()
{
    int T=0;
    scanf("%d",&T);
    int countT=0;
    while(T>0)
    {
        int k=0;
        scanf("%d",&k);
        printf("case #%d:\n",countT);
        printf("%d\n",solve5(k));
        T--;
        countT++;
    }
    return 0;
}