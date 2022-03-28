/* pointera deger atama denemeleri */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,a=7;
    //*p=7; //not possible
    p=&a;
    printf("\np = %d",*p);
    int *m;
    m=(int*)malloc(sizeof(int));
    *m=7;
    printf("\nm = %d",*m);
    return 0;
}