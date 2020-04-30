#include<iostream>
#include<vector>
using namespace std;
double pos(vector<int> v1,vector<int> v2)
{
    double prob=0.0;
    for (size_t i = 0; i < v1.size(); i++)
    {
        int countm=0;
        for (size_t j = 0; j < v2.size(); j++)
        {
            if(v1[i]>v2[j])
            {
                countm++;
            }
        }
        prob=prob+countm*1.0/v1.size();
    }
    return prob;
}
int main()
{
    int k=0;
    vector<int> jjm;
    int t=0;
    while (t<6)
    {
        scanf("%d",&k);
        jjm.push_back(k);
        t++;
    }
    t=0;
    vector<int> mmj;
    while (t<6)
    {
        scanf("%d",&k);
        mmj.push_back(k);
        t++;
    }    
    double res=pos(jjm,mmj);
    printf("%.6f",res);
    return 0;
}