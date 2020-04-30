#include<iostream>
#include<vector>
using namespace std;
int contsum(int n)
{
    int countn=0;
    int i=0;
    int j=0;
    for(i=1;i+i+1<=n;i++)
    {
        for(j=1;(i+i+j)*(j+1)/2<=n;j++)
        {
            if((i+i+j)*(j+1)/2==n)
            {
                countn++;
            }
        }
    }
    return countn;
}
int main()
{
    int k=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        int t=0;
        scanf("%d",&t);
        printf("case #%d:\n%d\n",i,contsum(t));
    }
    return 0;
}