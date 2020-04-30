#include<iostream>
using namespace std;
//********** Specification of Mean **********
int Mean(int a, int b) {
    int result=(a+b)/2;
    return result;
}

/***************************************************************/
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", Mean(a, b));
    return 0;
}