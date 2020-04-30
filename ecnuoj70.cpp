#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int h2d(vector<char> v)
{
    vector<int> iv;
    for(vector<char>::iterator it=v.begin();it!=v.end();it++)
    {
        if(*it>='0'&&*it<='9')
        {
            iv.push_back(*it-'0');
        }
        else
        {
            iv.push_back(*it-'a'+10);
        }    
    }
    int demi=0;
    for(size_t i=iv.size()-1;i>=0;i--)
    {
        demi+=iv[i]*pow(16,iv.size()-1-i);
    }
    return demi;
}
void printh(string s)
{
    string::iterator it;
    vector<char> v;
    for(it=s.begin();it!=s.end();it++)
    {
        v.push_back(*it);
    }
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
}