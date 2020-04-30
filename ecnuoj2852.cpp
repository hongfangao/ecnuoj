#include<string>
#include<vector>
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
double maxratio(string s,char &maxchar)
{
    int countn = 0;
    maxchar = ' ';
    char thischar = ' ';
    double maxnum = -1;
    double thisnum = -1;
    set<char> diffset;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            countn++;
            diffset.insert(s[i]);
        }
    }
    for(set<char>::iterator it=diffset.begin();it!=diffset.end();it++)
    {
        thisnum = count(s.begin(),s.end(),*it);
        thischar = *it;
        if(thisnum>maxnum)
        {
            maxnum=thisnum;
            maxchar=thischar;
        }
    }
    maxnum = maxnum*1.0/countn;
    return maxnum;
}
int main()
{
    string s;
    getline(cin,s);
    char maxchar = 'a';
    double res = maxratio(s,maxchar);
    printf("%c %.2lf\n",maxchar,res);
    return 0;
}