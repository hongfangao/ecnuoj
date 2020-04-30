#include<iostream>
using namespace std;
void drawline(int i,int j)
{
    for(int counti=0;counti<i;counti++)
    {
        cout<<" ";
    }
    for(int countj=0;countj<j;countj++)
    {
        cout<<"*";
    }
    for(int counti=0;counti<i;counti++)
    {
        cout<<" ";
    }
    cout<<endl;
}
void draw(int n)
{
    for(int i=1;i<2*n+1;i=i+2)
    {
        drawline((2*n+1-i)/2,i);
    }
    for(int i=2*n+1;i>=1;i=i-2)
    {
        drawline((2*n+1-i)/2,i);
    }
}
int main()
{
    int N=0;
    while (~scanf("%d",&N))
    {
        draw(N);
    }
    
}