#define ll long long
#include<iostream>
using namespace std;
int main()
{
    int t=0;
    scanf("%d",&t);
    ll steps[55];
    steps[1]=1;
    steps[2]=2;
    steps[3]=4;
    steps[4]=8;
    for(int j=5;j<=50;j++)
    {
        steps[j]=steps[j-1]+steps[j-2]+steps[j-3]+steps[j-4];
    }
    for(int i=0;i<t;i++)
    {
        int p=0;
        scanf("%d",&p);
        cout<<"case #"<<i<<":"<<endl;
        cout<<steps[p]<<endl;
    }
    return 0;
}