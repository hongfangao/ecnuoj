#include <stdio.h>

//********** Specification of SD **********
void SD(int a, int b, int *p) {
    *p = a+b;
    int *q=p+1;
    *q = a-b;
}

/***************************************************************/
int main() {
    int a, b, p[2];
    scanf("%d%d", &a, &b);
    SD(a, b, p);
    printf("%d %d\n", p[0], p[1]);
    return 0;
}