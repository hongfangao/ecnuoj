#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
vector<int> findallprime(int n)
{
    vector<int> v;
    int i=2;
    v.push_back(i);
    while (i<=n)
    {
        vector<int>::iterator iv=v.begin();
        while (iv!=v.end())
        {
            if(i%(*iv)==0)
            {
                break;
            }
            iv++;
        }
        if(iv==v.end())
        {
            v.push_back(i);
        }
        i++;
    }
    return v;
}
int main()
{
    int N=0;
    scanf("%d",&N);
    vector<int> v=findallprime(N);
    for (size_t i = 0; i < v.size(); i++)
    {
        if(i==v.size()-1)
        {
            cout<<v[i]<<endl;
        }
        else
        {
            cout<<v[i]<<" ";
        }
    }
    return 0;
}