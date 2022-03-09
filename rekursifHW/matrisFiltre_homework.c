/* bir zamanlar fakir ama gurulu bir matris ödevi vardi :) mxn filtreli bir matrise rabdom 0-250 arası degerler atanir, degerleri klavyeden 
girilen 3x3 boyutlu filtre matrisi tarafından kenar elemanları hariç taranip bulunan degerler yeni bir matrise atanır */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 7
#define n 7
int matris_output[n-4][m-4];
int tarama (int matris[][m],int i,int j,int filtre[][3]);
int main()
{
    int matris[n][m],i,j,filtre[3][3];
    srand(time(NULL));
    printf("\n3X3 boyutundaki filtre martrisin degerlerini giriniz lutfen");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n%d. eleman: ",i*3+j+1);
            scanf("%d",&filtre[i][j]);
        }
    }
    printf("\ntaranacak matrismizi gorelim:)\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            matris[i][j]=rand()%251;
            printf(" %d ",matris[i][j]);
        }
        printf("\n");
    }
    i=j=1;
    tarama(matris,i,j,filtre);
    printf("\ntarama sonucu:\n");
    for(i=0;i<n-4;i++)
    {
        for(j=0;j<m-4;j++)
        {
            printf(" %d ",matris_output[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int tarama (int matris[][m],int i,int j,int filtre[][3])
{
    int k,l,sum=0;
    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            sum+=matris[i+k][j+l]*filtre[k][l];
        }
    }
    matris_output[i-1][j-1]=sum;
    if(j<m-4)
        return tarama(matris,i,j+1,filtre);
    else if(i<n-4)
        return tarama(matris,i+1,1,filtre);
    else
        return 0;
}