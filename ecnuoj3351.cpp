#include<iostream>
using namespace std;
void printcoffee(int a,int b)
{
    int c=a+b;
    if(a==0)
    {
        cout<<"LBB made no coffee today."<<endl;
    }
    else
    {
        if(a==1)
        {
            cout<<"LBB made a cup of coffee today."<<endl;
        }
        else
        {
            cout<<"LBB made "<<a<<" cups of coffee today."<<endl;
        }
        
    }
    if(b==0)
    {
        cout<<"JDG made no coffee today."<<endl;
    }
    else
    {
        if(b==1)
        {
            cout<<"JDG made a cup of coffee today."<<endl;
        }
        else
        {
            cout<<"JDG made "<<b<<" cups of coffee today."<<endl;
        }
        
    }
    if(c==0)
    {
        cout<<"BOSS had no coffee today."<<endl;
    }
    else
    {
        if(c==1)
        {
            cout<<"BOSS had a cup of coffee today."<<endl;
        }
        else
        {
            cout<<"BOSS had "<<c<<" cups of coffee today."<<endl;
        }
        
    }
}
int main()
{
    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        int a=0,b=0;
        scanf("%d %d",&a,&b);
        printcoffee(a,b);
        t--;
    }
    return 0;
}