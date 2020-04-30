#include<stdio.h>
int gcd(int a, int b)
{ 
    int p=0;
    int q=0;
    if(a>=b)
    {
        p=a;
        q=b;
    }
    else
    {
        p=b;
        q=a;
    }
    int temp=0;
    while (p%q!=0)
    {
        temp=p%q;
        p=q;
        q=temp;
    }
    return q;
    //TODO: your definition
}
/*/////////////////////////////////////////////////////*/
/***************************************************************/
/*                                                             */
/*  DON'T MODIFY THIS FILE ANYWAY!                             */
/*                                                             */
/***************************************************************/
#include <stdio.h>
//********** Specification of gcd **********
int gcd(int a, int b);
/* PreCondition:
a and b are integers ranging from 1 to 1000,000,000
PostCondition:
return the greatest common divisor of a and b
*/
void solve()
{
int a,b; scanf("%d%d",&a,&b);
//********** gcd is called here **********
printf("%d\n",gcd(a,b));
//****************************************
}
int main()
{  int i,t;
scanf("%d\\n",&t);
for (i=0;i<t;i++)
{ printf("case #%d:\n",i);
solve();
}
return 0;
}