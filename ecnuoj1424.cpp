#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
bool isright(string a)
{
    string num1="";
    string num2="";
    string num3="";
    int pos1=a.find_first_of('+');
    int pos2=a.find_first_of('=');
    for(int i=0;i<pos1;i++)
    {
        num1+=a[i];
    }
    for(int j=pos1+1;j<pos2;j++)
    {
        num2+=a[j];
    }
    for(int k=pos2+1;k<a.size();k++)
    {
        num3+=a[k];
    }
    reverse(num1.begin(),num1.end());
    reverse(num2.begin(),num2.end());
    reverse(num3.begin(),num3.end());
    int n1 = atoi(num1.c_str());
    int n2 = atoi(num2.c_str());
    int n3 = atoi(num3.c_str());
    if(n1+n2==n3)
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    while(cin>>s)
    {
        if(s!="0+0=0")
        {
            if(isright(s))
            {
                cout<<"True"<<endl;
            }
            else
            {
                cout<<"False"<<endl;
            }
            
        }
        else
        {
            break;
        }
        
    }
    cout<<"True"<<endl;
    return 0;
}