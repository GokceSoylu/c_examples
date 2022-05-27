#include <stdio.h>
int main()//küçükten büyüğe
{
    int i, j, smalest, smalest_num, dizi[10];
    printf("\ndizinin elemanlarını giriniz ");
    for(i=0;i<10;i++) scanf("%d",&dizi[i]);
    printf("\ndizi  ");
    for(i=0;i<10;i++) printf("%d  ",dizi[i]);
    for(i=0;i<10-1;i++)
    {
        smalest=dizi[10-1];
        smalest_num=10-1;
        for(j=i;j<10-1;j++)
            if(dizi[j]<smalest)
            {
                smalest=dizi[j];
                smalest_num=j;
            }
        dizi[smalest_num]=dizi[i];
        dizi[i]=smalest;
    }
    printf("\ndizi siralandi  ");
    for(i=0;i<10;i++) printf("%d  ",dizi[i]);
    return 0;
}