#include<iostream>
using namespace std;
int main()
{
    int m=0;
    int n=0;
    int k=0;
    cin>>m>>n>>k;
    int it1=1;
    while (it1<=k)
    {
        if(it1%m!=0&&it1%n!=0)
        {
            cout<<it1%m<<" "<<it1%n<<endl;
        }
        if(it1%m==0&&it1%n!=0)
        {
            cout<<m<<" "<<it1%n<<endl;
        }
        if(it1%m!=0&&it1%n==0)
        {
            cout<<it1%m<<" "<<n<<endl;
        }
        if(it1%m==0&&it1%n==0)
        {
            cout<<m<<" "<<n<<endl;
        }
        it1++;
    }
    return 0;
}