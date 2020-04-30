#include<iostream>
#include<vector>
using namespace std;
/*
有两种情况，以1结尾和以0结尾
记n位不含101的字符串的个数为f(n),
记n位以1结尾且不含101的字符串个数为a[n],
n位以0结尾且不含101的字符串个数为b[n],
1.f(n)=a(n)+b(n)
2.a(n+1)=以1结尾的n位在末位加1+以0结尾的n位在末位加1-以10结尾的n位
a(n+1)=a(n)+b(n)-a(n-1)
3.b(n+1)=以0结尾的n位在末位加0+以1结尾的n位在末位加0
b(n+1)=b(n)+a(n)
4.初始条件:a(0)=b(0)=0;a(1)=b(1)=1
*/
int main()
{
    vector<int> va;
    vector<int> vb;
    va.push_back(0);
    va.push_back(1);
    vb.push_back(0);
    vb.push_back(1);
    int i=1;
    while(i<21)
    {
        va.push_back(va[i]+vb[i]-va[i-1]);
        vb.push_back(va[i]+vb[i]);
        i++;
    }
    int n=0;
    while (scanf("%d",&n)==1)
    {
        if(n==-1)
        {
            break;
        }
        else
        {
            printf("%d\n",va[n]+vb[n]);
        }
        
    }
    return 0;
}