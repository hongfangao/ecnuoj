#include<iostream>
using namespace std;
int main()
{
    int N=0;
    scanf("%d",&N);
    int countN=0;
    while (N>0)
    {
        int a=0;
        int b=0;
        int cond=0;
        scanf("%d %d",&a,&b);
        if(b%2!=0)
        {
            cond=1;
        }
        int rabbit=(b-2*a)/2;
        int chicken=(b-4*rabbit)/2;
        if(rabbit<0||chicken<0)
        {
            cond=1;
        }
        if(cond==1)
        {
            cout<<"No answer"<<endl;
        }
        else
        {
            cout<<chicken<<" "<<rabbit<<endl;
        }
        N--;
    }
    return 0;
}