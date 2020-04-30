#include<iostream>
#include<vector>
using namespace std;
vector<int> water(vector<int> v,int &signal)
{
    vector<int> rv;
    signal = 0;
    int i=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==1)
        {
            rv.push_back(v[i]);
        }
        if(v[i]==5)
        {
            rv.push_back(v[i]);
        }
        if(v[i]>=2&&v[i]<=4)
        {
            rv.push_back(1);
            rv.push_back(1);
            signal=1;
            break;
        }
    }
    for(int j=i+1;j<v.size();j++)
    {
        rv.push_back(v[j]);
    }
    return rv;
}
int main()
{
    int n=0;
    while (scanf("%d",&n)==1)
    {
        int signal = 0;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int t=0;
            scanf("%d",&t);
            v.push_back(t);
        }
            vector<int> rv=water(v,signal);
            if(signal==0)
            {
                cout<<"Deep Dark Fantasy of ECNU"<<endl;
            }
            else
            {
                for(int i=0;i<rv.size();i++)
                {
                    if(i==rv.size()-1)
                    {
                        cout<<rv[i]<<endl;
                    }
                    else
                    {
                        cout<<rv[i]<<" ";
                    }
                    
                }
            }

    }
    return 0;
}