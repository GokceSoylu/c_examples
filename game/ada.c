/* bu kodu yazan yaşlandı ;) */
#include <stdio.h>//bunu game of life oyununu yazabilmek icin yazdım. bu onun indirgenmiş hali.
#include <stdlib.h>
#include <time.h>
#define satir 10
#define sutun 10
int main()
{
    int ada[satir][sutun],dizi[satir*sutun]={0},kabile[satir*sutun]={0},i,j,k=0,m=0,max,min;
    srand(time(NULL));
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            ada[i][j]=rand()%2;
        }
    }
    printf("\nKBU adasinda yalnizlar ve el ele tutusan birlikler(ekip halay:)) bulunmaktadir\n\nancak su an KBU nun basi belada. Pd2 firtinasi esmek uzere\n\nyalnizlar ölecek\n\nel ele tutusanlar ne kadar kalabaliksa uyeler de o kadar uzun yasayabilecek");
    printf("\n\n!KBU ADASI!\n");
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            if(ada[i][j]==1)
                printf("X ");
            else if(ada[i][j]==0)
                printf("- ");
        }
        printf("\n");
    }
    for(i=0;i<satir;i++)
    {
        for(j=0;j<satir;j++)
        {
            if(ada[i][j]==1)
                dizi[k]++;
            else if(ada[i][j]==0)
                k++;
        }
    }
    for(i=0;i<k;i++)
    {
        if(dizi[i]>1)
        {
            kabile[m]=dizi[i];
            m++;
        }
    }
    printf("\nKBU adasinda %d adet birlik bulunmaktadir",m);
    for(i=0;i<m;i++)
        printf("\n%d.birlik: %d uye",i+1,kabile[i]);
    min=max=kabile[0];
    for(i=0;i<m;i++)
    {
        if(max<kabile[i])
            max=kabile[i];
        if(min>kabile[i])
            min=kabile[i];
    }
    printf("\n");
    if(max==min)
        printf("tum birliklerin yasam uzunlugu uye sayisi ayni oldugu icin aynidir\n evet ilginc ama burasi KBU\nburada hersey mumkun\n");
    
    else 
    {
        for(i=0;i<m;i++)
            if(kabile[i]==max)
                printf("%d. ",i+1);
        printf("birlik(ler) %d eleman sayisiyla en uzun omurlu birlik(ler)dir\n",max);
        for(i=0;i<m;i++)
            if(kabile[i]==min)
                printf("%d. ",i+1);
        printf("birlik(ler) %d eleman sayisiyla en kisa omurlu birlik(ler)dir",min);
    }
    return 0;
}    