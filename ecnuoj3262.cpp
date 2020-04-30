#include<iostream>
using namespace std;
int solve(int x,int n)
{
    int res=0;
    for(int i=1;i<=n;i++)
    {
        if(x*i%n==0)
        {
            res=i;
            break;
        }
    }
    return res;
}
int main()
{
    int x=0;
    int n=0;
    scanf("%d %d",&x,&n);
    for(int i=2;i<=n;i++)
    {
        cout<<solve(x,i)<<endl;
    }
    return 0;
}