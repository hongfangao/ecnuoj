#define ll long long
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool isprime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int k=0;
        scanf("%d",&k);
        cout<<"case #"<<i<<":"<<endl;
        for(int j=2;j<k;j++)
        {
            if(isprime(j))
            {
                if(k%j==0)
                {
                    if(isprime(k/j))
                    {
                        cout<<k/j<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}