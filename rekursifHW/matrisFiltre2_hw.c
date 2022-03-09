/* nxm filtreli bir matrisi degerelri klavyeden girilen 3x4 boyutlu bir filtre matris tarafindan taranıp degerler bir outpu matrise atanir */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 7
#define m 7
int output_matris[n-2][m-2];
int tarama(int[][m],int,int,int[][3]);
int main()
{
    int i,j,filtre[3][3],matris[n][m];
    srand(time(NULL));
    printf("3x3 boyutlu filtre matrisin elemanlarını giriniz lutfen\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n%d.eleman: ",i*3+j+1);
            scanf("%d",&filtre[i][j]);
        }
    }
    printf("\nfiltre matris: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",filtre[i][j]);
        printf("\n");
    }
    printf("\n\ntaranacak matris\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            matris[i][j]=rand()%251;
            printf("%d  ",matris[i][j]);
        }
        printf("\n");
    }
    i=j=0;
    tarama(matris,i,j,filtre);
    printf("\n\ntarama sonucu\n");
    for(i=0;i<n-2;i++)
    {
        for(j=0;j<n-2;j++)
            printf("%d  ",output_matris[i][j]);
        printf("\n");
    }
    return 0;
}
int tarama(int matris[][m],int i, int j,int filtre[][3])
{
    int k,l,sum=0;
    for(k=0;k<3;k++)
        for(l=0;l<3;l++)
            sum+=matris[i+k][j+l]*filtre[k][l];
    output_matris[i][j]=sum;
    if(j<m-3)
        return tarama(matris,i,j+1,filtre);
    else if(i<n-3)
        return tarama(matris,i+1,0,filtre); 
    else
        return 0;
}