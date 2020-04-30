#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int T=0;
    scanf("%d",&T);
    int countT=0;
    while (T>0)
    {
        vector<int> vg;
        while (1)
        {
            int k=0;
            scanf("%d",&k);
            if(k!=-1)
            {
                vg.push_back(k);
            }
            else
            {
                break;
            }       
        }
        sort(vg.begin(),vg.end());
        vector<int>::iterator it=vg.begin();
        int sg=0;
        for(it=vg.begin();it!=vg.end();++it)
        {
            sg=sg+(*it);
        }
        int aver=sg/vg.size();
        cout<<"case #"<<countT<<":"<<endl;
        cout<<vg[vg.size()-1]<<endl;
        cout<<vg[0]<<endl;
        cout<<aver<<endl;
        T--;
        countT++;
    }    
    return 0;
}