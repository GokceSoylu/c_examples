/* matrisi pointera atama */
#include <stdio.h>
int main()
{
    int a[3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},(*p)[5]=a,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}