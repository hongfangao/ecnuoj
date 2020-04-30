#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
vector<int> converttob(int n)
{
    vector<int> rv;
    while (n>0)
    {
        rv.push_back(n%2);
        n=n/2;
    }
    vector<int>::reverse_iterator rit=rv.rbegin();
    vector<int> v;
    for(rit=rv.rbegin();rit!=rv.rend();rit++)
    {
        v.push_back(*(rit));
    }
    return v;
}
vector<vector<char>> combine(set<char> s)
{
    vector<char> tempv;
    set<char>::iterator sit=s.begin();
    for(sit=s.begin();sit!=s.end();++sit)
    {
        tempv.push_back(*sit);
    }
    vector<vector<char>> rev;
    int n=s.size();
    for(int i=0;i<pow(2,n);i++)
    {
        vector<char> cv;
        vector<int> iv=converttob(i);
        for(size_t i=0;i<iv.size();i++)
        {
            if(iv[i]==1)
            {
                cv.push_back(tempv[i]);
            }
        }
        rev.push_back(cv);
    }
    return rev;
}
int main()
{
    int T=0;
    scanf("%d",&T);
    int countT=0;
    while (T>0)
    {
        set<char> s;
        char 
        while (1)
        {
            char a;
            scanf("%c",&a);
            if(a=='\n')
            {
                break;
            }
            else
            {
                s.insert(a);
            }    
        }
        vector<vector<char>> rvv=combine(s);
        cout<<"case #"<<countT<<":"<<endl;
        for(size_t i=0;i<rvv.size();++i)
        {
            for(size_t j=0;j<rvv[i].size();j++)
            {
                cout<<rvv[i][j];
            }
            cout<<endl;
        }    
        countT++;
        T--;
    }
    return 0;
}