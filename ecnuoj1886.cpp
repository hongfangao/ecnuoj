#include<iostream>
using namespace std;
int main()
{
    int N=0;
    while(~scanf("%d",&N))
    {
        int K=0;
        while (N>0)
        {
            int s=0;
            scanf("%d",&s);
            K=K^s;
            N--;
        }
        cout<<K<<endl;
    }
    return 0;
}