#include<iostream>
#include<vector>
using namespace std;
void getaver(vector<int> v)
{
    int sum=0;
    double aver=0.0;
    for(vector<int>::reverse_iterator rit=v.rbegin();rit!=v.rend();rit++)
    {
        cout<<(*rit)<<" ";
        sum+=(*rit);
    }
    cout<<endl;
    aver=sum*1.0/v.size();
    cout<<sum<<" ";
    printf("%.2f",aver);
}
int main()
{
    int T=0;
    scanf("%d",&T);
    vector<int> v;
    while (T>0)
    {
        int k=0;
        scanf("%d",&k);
        v.push_back(k);
        T--;
    }
    getaver(v);
    return 0;
}