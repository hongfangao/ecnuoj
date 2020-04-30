#include<iostream>
#include<string>
using namespace std;
void muts(string s,int n,int i)
{
    cout<<"case #"<<i<<":"<<endl;
    for (size_t j = 0; j < n; j++)
    {
        cout<<s;
    }
    cout<<endl;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        string s;
        int t=0;
        cin>>s>>t;
        muts(s,t,i);
    }
    return 0;
}