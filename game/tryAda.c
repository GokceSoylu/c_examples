#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define satir 4
#define sutun 4
int main()
{
    srand(time(NULL));
    int i,j,matris[satir][sutun],dizi[satir*sutun]={0},k=0;
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            matris[i][j]=rand()%2;
        }
    }
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            if(matris[i][j]==1)
                printf("* ");
            else if(matris[i][j]==0)
                printf("- ");
        }
        printf("\n");
    }
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            if(matris[i][j]==1)
                dizi[k]++;
            else if(matris[i][j]==0)
                k++;
        }
    }
    for(i=0;i<=k;i++)
        if(dizi[i]>1)
            printf("\n%d. birligin eleman sayısı: %d",i+1,dizi[i]);
    return 0;
}