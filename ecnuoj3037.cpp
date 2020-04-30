#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int trans2int(char s)
{
    int r=0;
    if(s>='0'&&s<='9')
    {
        r=s-'0';
    }
    else
    {
        r=s-'A'+10;
    }
    return r;
}
int trans2char(int n)
{
    char c;
    if(n<=9&&n>=0)
    {
        c='0'+n;
    }
    else
    {
        c='A'+n-10;
    }
    return c;
}
char adddigit(char a,char b)
{
    int d1=trans2int(a);
    int d2=trans2int(b);
}
string addh(string a,string b)
{
    string c,d;
    if(a.length()>=b.length())
    {
        c=a;
        d=b;
    }
    else
    {
        c=b;
        d=a;
    }
    int jinwei=0;
    for(int i=0;i<d.length();i++)
    {
        int thisdigitc=trans2int(c[i]);
        int thisdigitd=trans2int(d[i]);
        if(thisdigitc+thisdigitd+jinwei>=16)
        {
            c[i]=trans2char(thisdigitc+thisdigitd+jinwei-16);
            jinwei=1;
        }
        else
        {
            c[i]=trans2char(thisdigitc+thisdigitd+jinwei);
            jinwei=0;
        }
                
    }
    int j=d.length();
    while (jinwei!=0)
    {
        
    }
    
}