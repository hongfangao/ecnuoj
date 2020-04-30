#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    double c=0;
    double f=0;
    if(s[2]=='f')
    {
        f=10*int(s[0]-'0')+int(s[1]-'0');
        c=(f-32)*5/9.0;
        printf("%.2fc",c);
    }
    if(s[2]=='c')
    {
        c=10*int(s[0]-'0')+int(s[1]-'0');
        f=9*c/5.0+32;
        printf("%.2ff",f);
    }
    return 0;
}