#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> addbigint(string a,string b)
{
    string::iterator ia=a.begin();
    string::iterator ib=b.begin();
    vector<int> va;
    for(ia=a.begin();ia!=a.end();ia++)
    {
        va.push_back(*ia-'0');
    }
    vector<int> vb;
    for(ib=b.begin();ib!=b.end();ib++)
    {
        vb.push_back(*ib-'0');
    }
    vector<int> rva;
    for(vector<int>::reverse_iterator ri=va.rbegin();ri!=va.rend();ri++)
    {
        rva.push_back(*ri);
    }
    vector<int> rvb;
    for(vector<int>::reverse_iterator ri=vb.rbegin();ri!=vb.rend();ri++)
    {
        rvb.push_back(*ri);
    }
    vector<int> rv;
    if(rva.size()<rvb.size())
    {
        while (rva.size()<rvb.size())
        {
            rva.push_back(0);
        }    
    }
    else
    {
        while (rvb.size()<rva.size())
        {
            rvb.push_back(0);
        }
    }
    for (size_t i = 0; i < rva.size(); i++)
    {
        int thisdigit = rva[i]+rvb[i];
        if(thisdigit>9)
        {
            if(i==rva.size()-1)
            {
                rv.push_back(thisdigit-10);
                rv.push_back(1);
            }
            else
            {
                rva[i+1]+=1;
                rv.push_back(thisdigit-10);
            }    
        }
        else
        {
            rv.push_back(thisdigit);
        }
        
    }
    vector<int> v;
    for(vector<int>::reverse_iterator r= rv.rbegin();r!=rv.rend();r++)
    {
        v.push_back(*r);
    }
    return v;
}
int main()
{
    string a,b;
    cin>>a>>b;
    vector<int> rv=addbigint(a,b);
    for(size_t i=0;i<rv.size();i++)
    {
        cout<<rv[i];
    }
}