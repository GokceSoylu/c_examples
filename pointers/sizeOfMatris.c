/* matrisin boyutunu ögrenme cabaları */
#include <stdio.h>
#define asize(x) (sizeof(x)/sizeof(*x))
int main()
{
    int a[5][10][20],c[10];//pointer devamıyla ilgileniyo 
    double b[8][20];
    printf("\na dizisinin boyutu = %u",sizeof(*c));
    printf("\nb dizisinin boyutu = %u",sizeof(*b));
    return 0;
}