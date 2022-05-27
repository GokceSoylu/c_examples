#include <stdio.h>//küçükten büyüğe
int main()
{
    int i,j,dizi[10],temp,flag;
    printf("\n dizi elemanlarını giriniz  ");
    for(i=0;i<10;i++) scanf("%d",&dizi[i]);
    printf("\ndizi\n");
    for(i=0;i<10;i++) printf("%d  ",dizi[i]);
    for(i=0;i<10-1;i++)
    {    
        flag=0;
        for(j=0;j<10-1-i;j++)
           if(dizi[j]>dizi[j+1])
            {
                temp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;
                flag=1;
            }
        if(flag==0) break;//eger yukarıdaki if'in içine hiç girmezse bu dizinin artık sıralı olduğunu gösterir. boş döngüye sebep olmamak için buraya break attım
    }    
    printf("\ndizi buyukten kucuge siralandi  ");
    for(i=0;i<10;i++) printf("%d  ",dizi[i]);
    return 0;
}