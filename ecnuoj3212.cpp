#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
bool isbalanced(string s)
{
    stack<char> sc;
    for(string::iterator it=s.begin();it!=s.end();it++)
    {
        if(*it=='('||*it=='{'||*it=='[')
        {
            sc.push(*it);
        }
        else
        {
        if(*it==')')
        {
            if(sc.top()=='(')
            {
                sc.pop();
            }
            else
            {
                return false;
            }
            
        }
        if(*it=='}')
        {
            if(sc.top()=='{')
            {
                sc.pop();
            }
            else
            {
                return false;
            }
        }
        if(*it==']')
        {
            if(*it=='[')
            {
                sc.pop();
            }
            else
            {
                return false;
            }
        }
        }
    }
    if(sc.size()==0)
    {
        return true;
    }
    return false;
}
int main()
{
    int t=0;
    scanf("%d",&t);
    for (size_t i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        if(isbalanced(s))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}