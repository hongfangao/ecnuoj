#include<iostream>
#include<vector>
using namespace std;
int num1(int n)
{
    int res=0;
    if(n==0)
    {
        return res;
    }
    while (n!=0)
    {
        if(n%2==1)
        {
            res++;
        }
        n=n/2;
    }
    return res;
}
int main()
{
    int s=0;
    scanf("%d",&s);
    cout<<num1(s)<<endl;
    return 0;
}