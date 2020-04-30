#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
    int p=max(a,b);
    int q=min(a,b);
    while (p%q!=0)
    {
        int temp=p%q;
        p=q;
        q=temp;
    }
    return q;
}
int main()
{
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    cout<<gcd(a,b)<<endl;
    return 0;
}