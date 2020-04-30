#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int maxl=1000001;
int calsum(int n)
{
    int countT=n;
    while (n!=0)
    {
        countT=countT+n%10;
        n=n/10;
    }
    return countT;
}
int main()
{
    vector<int> v(maxl,0);
    for(int i=1;calsum(i)<maxl;++i)
    {
        v[calsum(i)]=1;
    }
    for(int i=1;i<maxl;++i)
    {
        if(v[i]==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}