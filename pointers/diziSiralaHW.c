/* kendiler kucukten buyuge dogru sirali olan iki diziyi pointer kullanarak yine sirali olan tek bir dizi haline getirir */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,*pp,*ppp,i,j,k,size1,size2;
    printf("ilk dizinin eleman sayisini girniz");
    scanf("%d",&size1);
    p=(int*)malloc(sizeof(int)*size1);
    printf("ilk dizinin elemanlarini giriniz lutfen");
    for(i=0;i<size1;i++)
        scanf("%d",(p+i));
    printf("ikinci dizinin eleman sayisini giriniz");
    scanf("%d",&size2);
    pp=(int*)malloc(sizeof(int)*size2);
    printf("ikinci dizinin elemanlarini da giriniz lutfen ");
    for(i=0;i<size2;i++)
        scanf("%d",(pp+i));
    ppp=(int*)malloc(sizeof(int)*(size1+size2));
    i=j=k=0;
    while(k<(size1+size2))
    {
        if(*(p+i) <= *(pp+j) || j>=size2)//1.dizi buyuk
        {
            *(ppp+k) = *(p+i);
            i++;
            k++;
        }
        if(*(pp+j) <= *(p+i) || i>=size1)//ikinci dizi buyuk --> else kullanmdım esit olma durumları için
        {
            *(ppp+k) = *(pp+j);
            j++;
            k++;
        }

    }
    printf("\nsonuc\n");
    for(i=0;i<(size1+size2);i++)
        printf("%d ",*(ppp+i));
    return 0;
}//güzel oldu :)