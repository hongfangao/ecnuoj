//********** Specification of Sec2HMS **********
int Sec2HMS(int second);
/* PreCondition:  
     second 是以秒数表示的一段时间，0<=时长<100小时
   PostCondition:
     返回以HHMMSS形式表示的等长的一段时间,整数中开头的0可忽略，如010010为10010，表示1小时零10秒
*/
void Sec2HMS(int second,int &a,int &b,int &c) { //TODO: your function definition
    a=second/3600;
    second=second%3600;
    b=second/60;
    c=second%60;
}

#include <stdio.h>
int main() {
    int second;
    scanf("%d", &second);
    int a=0;
    int b=0;
    int c=0;
    Sec2HMS(second,a,b,c);
    printf("%d%d%d\n", a,b,c);
    return 0;
}
