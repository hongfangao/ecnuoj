#include<iostream>
#include<vector>
using namespace std;
int itmul(int n)
{
    if(n==0)
    {
        return 1;
    }
    int res=1;
    for (size_t i = 1; i < n+1; i++)
    {
        res=res*i;
    }
    return res;
}
int combine(int x,int y)
{
    int res=itmul(y)/(itmul(x)*itmul(y-x));
    return res;
}
int main()
{
    int T=0;
    scanf("%d",&T);
    for (size_t i = 0; i < T; i++)
    {
        for (size_t j = 0; j < i+1; j++)
        {
            if(j==i)
            {
                cout<<combine(j,i)<<endl;
            }
            else
            {
                cout<<combine(j,i)<<" ";
            }
            
        }
        
    }
    return 0;
}