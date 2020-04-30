#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int countc=0;
    char s;
    while(~scanf("%c",&s))
    {
        if(s=='\n')
        {
            break;
        }
        if(s>='0'&&s<='9')
        {
            countc++;
        }
    }
    printf("%d",countc);
    return 0;
}