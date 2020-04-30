#include <stdio.h>

//********** Specification of Digits **********
int Digits(char *s) {
    int countd=0;
    while (*s)
    {
        if((*s)>='0'&&(*s)<='9')
        {
            countd=countd+1;
        }
        s=s+1;
    }
    return countd;
}

/***************************************************************/
int main() {
    char s[81];
    scanf("%s", s);
    printf("%d\n", Digits(s));
    return 0;
}