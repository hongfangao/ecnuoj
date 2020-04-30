#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N=0;
    scanf("%d",&N);
    vector<int> v;
    while (N>0)
    {
        int k=0;
        scanf("%d",&k);
        v.push_back(k);
        N--;
    }
    for (size_t i = 0;i<v.size(); i++)
    {
        cout<<seecow(v,i)<<endl;
    }
    return 0;
}