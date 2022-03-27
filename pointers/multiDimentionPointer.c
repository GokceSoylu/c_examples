/* iki noyutlu dizi şeklindeki pointeri dinamşk bellek yontemi kullanarak olusturalim */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,i,j,satir,sutun;
    printf("\nsatir = ?");
    scanf("%d",&satir);
    printf("\nsutun  = ?");
    scanf("%d",&sutun);
    p=(int**)malloc(satir*sizeof(int));
    for(i=0;i<satir;i++)
        p[i]=(int*)malloc(sutun*sizeof(int));
    printf("\nmatrisin elemanlarını giiriniz lutfen");
    for(i=0;i<satir;i++)
        for(j=0;j<sutun;j++)
            scanf("%d",(p+i*sutun+j));
    printf("\nmatris\n");
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
            printf("%d ",*(p+i*sutun+j));
        printf("\n");
    }
    return 0;    
}