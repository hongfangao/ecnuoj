#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> getamount(int money)
{
    int countm=0;
    vector<int> mv;
    while (countm<7)
    {
        switch(countm)
        {
            case 0:mv.push_back(money/100);money=money%100;break;
            case 1:mv.push_back(money/50);money=money%50;break;
            case 2:mv.push_back(money/20);money=money%20;break;
            case 3:mv.push_back(money/10);money=money%10;break;
            case 4:mv.push_back(money/5);money=money%5;break;
            case 5:mv.push_back(money/2);money=money%2;break;
            case 6:mv.push_back(money/1);break;
        }
        countm++;
    }
    return mv;
}
int main()
{
    int T=0;
    scanf("%d",&T);
    int countc=0;
    while (T>0)
    {
        int money=0;
        scanf("%d",&money);
        vector<int> rv=getamount(money);
        for(vector<int>::iterator it=rv.begin();it!=rv.end();++it)
        {
            printf("%d ",*it);
        }
        printf("\n");
        T--;
        countc++;
    }
    return 0;
}