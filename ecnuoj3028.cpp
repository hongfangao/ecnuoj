#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void printpoly(vector<int> v)
{
    bool allzero = 0;
    int num0 = count(v.begin(),v.end(),0);
    if(num0==9)
    {
        cout<<"0";
    }
    else
    {
        int signal = 0;
        for(int i=0;i<v.size()-2;i++)
        {
            if(v[i]>0)
            {
                if(signal==0)
                {
                    if(v[i]==1)
                    {
                        cout<<"x^"<<(8-i);
                    }
                    else
                    {
                        cout<<v[i]<<"x^"<<(8-i);
                    }
                    signal = 1;
                }
                else
                {
                    if(v[i]==1)
                    {
                        cout<<"+x^"<<(8-i);
                    }
                    else
                    {
                        cout<<"+"<<v[i]<<"x^"<<(8-i);     
                    }
                }    
            }
            if(v[i]<0)
            {
                if(signal==0)
                {
                    if(v[i]==-1)
                    {
                        cout<<"-x^"<<(8-i);
                    }
                    else
                    {
                        cout<<v[i]<<"x^"<<(8-i);
                    }
                    signal = 1;
                }
                else
                {
                    if(v[i]==-1)
                    {
                        cout<<"-x^"<<(8-i);
                    }
                    else
                    {
                        cout<<v[i]<<"x^"<<(8-i);
                    }
                    
                }    
            }
        }
        if(v[v.size()-2]!=0)
        {
            if(v[v.size()-2]>0)
            {
                if(signal==0)
                {
                    if(v[v.size()-2]!=1)
                    {
                        cout<<v[v.size()-2]<<"x";
                    }
                    else
                    {
                        cout<<"x";
                    }
                    signal=1;
                }
                else
                {
                    if(v[v.size()-2]!=1)
                    {
                        cout<<"+"<<v[v.size()-2]<<"x";
                    }
                    else
                    {
                        cout<<"+x";
                    }
                }
                
            }
            else
            {
                if(signal==0)
                {
                    if(v[v.size()-2]!=-1)
                    {
                        cout<<v[v.size()-2]<<"x";
                    }
                    else
                    {
                        cout<<"-x";
                    }
                    signal=1;
                }
                else
                {
                    if(v[v.size()-2]!=-1)
                    {
                        cout<<v[v.size()-2]<<"x";
                    }
                    else
                    {
                        cout<<"-x";
                    }
                }
                
            }
        }
        if(v[v.size()-1]!=0)
        {
            if(signal==0)
            {
                cout<<v[v.size()-1];
            }
            else
            {
                if(v[v.size()-1]>0)
                {
                    cout<<"+"<<v[v.size()-1];
                }
                else
                {
                    cout<<v[v.size()-1];
                }
            }
        }
    }
    cout<<endl;
}
int main()
{
    int t=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        cout<<"case #"<<i<<":"<<endl;
        int n=8;
        vector<int> v;
        while(n>=0)
        {
            int l=0;
            scanf("%d",&l);
            v.push_back(l);
            n--;
        }
        printpoly(v);
    }
    return 0;
}