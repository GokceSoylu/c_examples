#include <stdio.h>
int main()//küçükten büyüğe 
{
    int i, j, add, dizi[10];
    printf("\ndizinin elemanlarını giriniz  ");
    for(i=0;i<10;i++) scanf("%d",&dizi[i]);
    printf("\ndizi  ");
    for(i=0;i<10;i++) printf("%d  ",dizi[i]);
    for(i=1;i<10-1;i++)
    {
        add=dizi[i];
        for(j=i-1;j>=0 && dizi[j]>add;j--)
            dizi[j+1]=dizi[j];
        dizi[j+1]=add; 
    }    
    printf("\ndizi siralandi  ");
    for(i=0;i<10;i++) printf("%d  ",dizi[i]);
    return 0;
}
