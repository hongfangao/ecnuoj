#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> getdigit(int n)
{
    vector<int> v;
    while(n>0)
    {
        v.push_back(n%10);
        n=n/10;
    }
    return v;
}
bool iscon(int n)
{
    vector<int> mv;
    vector<int> v= getdigit(n);
    for (size_t i = 0; i < v.size()-1; i++)
    {
        int j = i+1;
        mv.push_back(v[j]-v[i]);
    }
    int i=0;
    int con=0;
    while (i<mv.size())
    {
        if(v[i]<0&&con==0)
        {
            i++;
        }
        if(v[i]>0&&con==0)
        {
            i++;
            con=1;
        }
        if(v[i]<0&&con==1)
        {
            return false;
        }
        if(v[i]>0&&con==1)
        {
            i++;
        }
    }
    if(i==mv.size()&&con==1)
    {
        return true;
    }
    return false;
}
int main()
{
    int N=0;
    scanf("%d",&N);
    int countN=0;
    while (N>0)
    {
        int a=0;
        int b=0;
        int countT=0;
        scanf("%d %d",&a,&b);
        for (size_t i = a; i < b+1; i++)
        {
            if(iscon(i))
            {
                countT++;
            }
        }
        cout<<"case #"<<countN<<":"<<endl;
        cout<<countT<<endl;
        N--;
        countN++;
    }
    return 0;
}