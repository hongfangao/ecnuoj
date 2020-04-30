#include<iostream>
using namespace std;
int main()
{
    int m=0;
    int n=0;
    scanf("%d %d",&m,&n);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n ; j++)
        {
            if(j!=n)
            {
                cout<<(i-1)*m+j<<" ";
            }
            else
            {
                cout<<(i-1)*m+j<<endl;
            }
            
        }
    }
    return 0;
}