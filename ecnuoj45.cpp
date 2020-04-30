#include <stdio.h>
//********** Specification of arrayGCD **********
int gcd(int a,int b)
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
    while (p%q!=0)
    {
        int temp=p%q;
        p=q;
        q=temp;
    }
    return q;
}
int arrayGCD(int *p, int n)
/* PreCondition:  
      p 指向一个整数数组，n 范围为 1-100
   PostCondition: 
      返回 p 所指数组的 n 个元素的最大公约数
*/
{
    int q=*p;
    p++;
    int r=gcd(q,*p);
    while(p!=NULL)
    {
        r=gcd(r,*p);
        p++;
    }
    return r;
}

/*******************************************************/
int main() {
    int a[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d\n", arrayGCD(a, n));
    return 0;
}