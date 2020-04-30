#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void count0_1(int n,int &num1,int &num0)
{
    vector<int> v;
    if(n==0)
    {
        v.push_back(0);
    }
    else
    {
        while (n!=0)
        {
            v.push_back(n%2);
            n=n/2;
        }
        
    }
    num1 = count(v.begin(),v.end(),1);
    num0 = count(v.begin(),v.end(),0);
}
int main()
{
    int k=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        int t=0;
        scanf("%d",&t);
        int num1=0;
        int num0=0;
        count0_1(t,num1,num0);
        printf("%d %d\n",num0,num1);
    }
    return 0;
}