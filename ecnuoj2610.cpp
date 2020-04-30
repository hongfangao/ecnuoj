#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int rtime(vector<int> v,int k)
{
    int res=0;
    int countk=0;
    vector<int>::iterator it=v.begin();
    while (countk<k)
    {
        res=res+(*it);
        it++;
        countk++;
    }
    return res;
}
int main()
{
    int all=0;
    scanf("%d",&all);
    vector<int> rv;
    while (all>0)
    {
        int M=0;
        int k=0;
        scanf("%d %d",&M,&k);
        int countm=0;
        vector<int> v;
        while (countm<M)
        {
            int task=0;
            scanf("%d",&task);
            v.push_back(task);
            countm++;
        }
        rv.push_back(rtime(v,k));
        all--;
    }
    for(vector<int>::iterator vit=rv.begin();vit!=rv.end();vit++)
    {
        printf("%d\n",(*vit));
    }
    return 0;
}