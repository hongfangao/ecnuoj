#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string thispro(string s,string t)
{
    string temp = min(s,t);
    string rstring = temp++;
    return rstring;
}
int main()
{
    string s;
    string t;
    cin>>s>>t;
    cout<<thispro(s,t)<<endl;
}