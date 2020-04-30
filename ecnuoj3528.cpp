#include<iostream>
using namespace std;
int main()
{
    int m=0;
    int n=0;
    cin>>n>>m;
    int result=0;
    int it1=n;
    int it2=m;
    while (n>0)
    {
        int thislinemax=0;
        while (it2>0)
        {
            int t;
            cin>>t;
            if(thislinemax<t)
            {
                thislinemax=t;
            }
            it2--;
        }
        result=result+thislinemax;
        n--;
        it2=m;
    }
    cout<<result<<endl;
    return 0;
}