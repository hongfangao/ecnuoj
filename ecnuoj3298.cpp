#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int T=0;
    scanf("%d",&T);
    while (T>0)
    {
        vector<char> cv;
        string s;
        cin>>s;
        for(string::iterator c=s.begin();c!=s.end();++c)
        {
            cv.push_back(*c);
        }
        int num1=count(cv.begin(),cv.end(),'1');
        int num0=count(cv.begin(),cv.end(),'0');
        cout<<abs(num1-num0)<<endl;
        T--;
    }
    return 0;
}