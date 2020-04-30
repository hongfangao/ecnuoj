#include<iostream>
using namespace std;
int numof5(int n)
{
    int co=0;
    while (n!=0)
    {
        co=co+n/5;
        n=n/5;
    }
    return co;
}
int main()
{
    int t=0;
    scanf("%d",&t);
    for (size_t i = 0; i < t; i++)
    {
        int nu=0;
        scanf("%d",&nu);
        cout<<numof5(nu)<<endl;
    }
    return 0;
}