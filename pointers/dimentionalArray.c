/* iki boyutlu diziyi pointera atama ve yazdırma */
#include <stdio.h>
int main()
{
    int ar[3][4]={1,2,3,4,5,6,7,8,9,0,1,2},i,*p=&ar[0][0];
    for(i=0;i<12;i++)
        printf("%d ",*(p+i));
    return 0;
}