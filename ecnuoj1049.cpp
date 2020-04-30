#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int m=0;
    int n=0;
    scanf("%d %d",&n,&m);
    vector<int> vn;
    vector<int> vm;
    while (n>0)
    {
        int k=0;
        scanf("%d",&k);
        vn.push_back(k);
        n--;
    }
    while (m>0)
    {
        int k=0;
        scanf("%d",&k);
        vm.push_back(k);
        m--;
    }
    sort(vn.begin(),vn.end());
    vector<int>::iterator in;
    vector<int>::iterator im;
    for(im=vm.begin();im!=vm.end();im++)
    {
        int pos1 = lower_bound(vn.begin(),vn.end(),*im)-vn.begin();
        int pos2 = upper_bound(vn.begin(),vn.end(),*im)-vn.begin();
        printf("%d\n",pos2-pos1);
    }
    return 0;    
}