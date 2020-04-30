#include<string>
#include<iostream>
using namespace std;
bool isvalidip(string s,int &signal,string &temp)
{
    string ip0="";
    string ip1="";
    string ip2="";
    string ip3="";
    ip0+=s[0];
    ip0+=s[1];
    ip0+=s[2];
    ip1+=s[4];
    ip1+=s[5];
    ip1+=s[6];
    ip2+=s[8];
    ip2+=s[9];
    ip2+=s[10];
    ip3+=s[12];
    ip3+=s[13];
    ip3+=s[14];
    int part0=atoi(ip0.c_str());
    int part1=atoi(ip1.c_str());
    int part2=atoi(ip2.c_str());
    int part3=atoi(ip3.c_str());
    if(part0>=0&&part0<=255)
    {
        if(part1>=0&&part1<=255)
        {
            if(part2>=0&&part2<=255)
            {
                if(part3>=0&&part3<=255)
                {
                    return true;
                }
                else
                {
                    signal = 3;
                    temp = part3;
                }
                
            }
            else{
                signal = 2;
                temp = part2;
            }
        }
        else
        {
            signal = 1;
            temp = part1;
        }
        
    }
    else
    {
        signal = 0;
        temp = part0;
    }
    return false;
}
int main()
{
    int t=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        string ip;
        cin>>ip;
        int signal = 0;
        string temp="";
        cout<<"case #"<<i<<":"<<endl;
        if(isvalidip(ip,signal,temp))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No "<<signal<<" "<<temp<<endl;
        }
        
    }
    return 0;
}