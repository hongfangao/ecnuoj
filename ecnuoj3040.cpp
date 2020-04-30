#include<iostream>
#include<vector>
using namespace std;
vector<int> conv2b(int n)
{
    vector<int> v;
    while (n!=0)
    {
        v.push_back(n%2);
        n=n/2;
    }
    return v;
}
int maxl(vector<int> v)
{
    int maxdif=-1;
    int dif=0;
    int i=0;
    while(i<v.size())
    {
        for(int j=i+1;j+1<v.size();j++)
        {
            if(v[j+1]!=v[j])
            {
                dif++;
            }
            else
            {
                if(dif>maxdif)
                {
                    maxdif=dif;
                }
                i=j+1;
                break;
            }
            
        }
    }
    return maxdif;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int k=0;
        scanf("%d",&k);
        printf("case #%d:\n",i);
        printf("%d\n",maxl(conv2b(k)));
    }
    return 0;
}