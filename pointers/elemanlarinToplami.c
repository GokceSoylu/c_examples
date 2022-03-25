/* dizidekş elemanların toplamını bulan c kodunu pointer kullanarak yazınız */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,*p,n,sum=0,j;
    p=(int*)malloc(sizeof(int));
    printf("dizini elemanlarını girimiz lutfen\nbitirmek icin -1 giriniz");
    while(1)
    {
        scanf("%d",&n);
        if(n==-1) break;
        *(p+i)=n;
        i++;
        p=realloc(p,(i+1)*sizeof(int));
    }
    for(j=0;j<i;j++)
    {
        sum+=*(p+j);
        printf("%d ",p[j]);
    }    
    printf("\ntığoplam = %d",sum);
    return 0;
}