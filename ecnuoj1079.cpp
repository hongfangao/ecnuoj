#include<iostream>
using namespace std;
int mutall(int n)
{
    int mut=1;
    if(n==0)
    {
        return 1;
    }
    for (size_t i = 1; i < n; i++)
    {
        mut=mut*i;
    }
    return mut;
}
int cal(int n,int m)
{
    int upper=mutall(m);
    int down1=mutall(n);
    int down2=mutall(m-n);
    int r=upper/(down1*down2);
    return r;
}
int main()
{
    int t=0;
    while (~scanf("%d",&t))
    {
        if(t==0)
        {
            break;
        }
        else
        {
            for (size_t i = 0; i < t; i++)
            {
                for (size_t j = 0; j <= i; j++)
                {
                    if(j==i-1)
                    {
                        cout<<cal(j,i)<<endl;
                    }
                    else
                    {
                        cout<<cal(j,i)<<" ";
                    }
                    
                }
                
            }
            
        }
        
    }
    return 0;
}