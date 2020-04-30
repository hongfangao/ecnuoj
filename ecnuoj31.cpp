#include <stdio.h>

#define MAX 1000

typedef struct {
    int x, y, z;
} Point;

//********** Specification of NearPoints **********
int NearPoints(Point *p, int n) {
    int countd=0;
    int countn=0;
    while (countn<n)
    {
        int distance=((*p).x)*((*p).x)+((*p).y)*((*p).y)+((*p).z)*((*p).z);
        if(distance<10000)
        {
            countd++;
        }
        countn++;
        p=p+1;
    }
    return countd;
}

/***************************************************************/
int main() {
    int n, i;
    Point p[MAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d%d%d", &p[i].x, &p[i].y, &p[i].z);
    printf("%d\n", NearPoints(p, n));
    return 0;
}
