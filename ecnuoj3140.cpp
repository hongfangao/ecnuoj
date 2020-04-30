#define ll long long
#include<iostream>
using namespace std;
int jjc(int n)
{
    int res=1;
    for(int i=1;i<=n;i=i+2)
    {
        res=res*i;
    }
    return res;
}
int addjjc(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+jjc(i);
    }
    return sum;
}
int main()
{
    int a=0;
    scanf("%d",&a);
    while (a>0)
    {
        int k=0;
        scanf("%d",&k);
        cout<<addjjc(k)<<endl;
        a--;
    }
    return 0;
}