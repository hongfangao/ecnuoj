#include <stdio.h>
//********** Specification of Mean **********
int sum(int a, int b) {
    int result=0;
    result=a+b;
    if(result<0)
    {
        return -1;
    }
    return result;
}

/*******************************************************/
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", sum(a, b));
    return 0;
}