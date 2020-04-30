#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d %d",&a,&b,&c);
    int d=min(min(a,b),c);
    int e=max(max(a,b),c);
    int f=a+b+c-d-e;
    cout<<d<<" "<<f<<" "<<e<<endl;
    return 0;
}