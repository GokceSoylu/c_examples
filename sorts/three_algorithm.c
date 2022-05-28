#include <stdio.h>
void bubble(int[]);
void insertion(int[]);
void selection(int[]);
int main()
{
    int dizi[10], i;
    printf("\ndizinin elemanlaarını giriniz  ");
    for(i=0;i<10;i++) scanf("%d",&dizi[i]);
    printf("\ndizi\n");
    for(i=0;i<10;i++) printf("%d  ",dizi[i]);
    printf("hangi algoritma ile sıralamak istesiniz?\nbaloncuk 1\nekeleme2\nsecme3  ");
    scanf("%d",&i);
    switch(i)
    {
        case 1: 
            bubble(dizi); break;
        case 2: 
            insertion(dizi); break;
        case 3:
            selection(dizi); break;
    }
    printf("\ndiziz\n");
    for(i=0;i<10;i++) printf("%d  ",dizi[i]);
    return 0;
}
void bubble(int a[])
{
    int i, j, temp, flag;
    for(i=0;i<10-1;i++)
    {
        flag=0;
        for(j=0;j<10-1-i;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        if(flag==0) break;//yukarıdaki if'in içine girmez ise bu dizinin artık sıralı olduğunu gösterir. Gereksiz döngüden kurtulmak için bu kontrolu attım
    }
}
void insertion(int a[])
{
    int i, j, add;
    for(i=1;i<10;i++)
    {
        add=a[i];
        for(j=i-1;j>=0 && a[j]>add;j--)
            a[j+1]=a[j];
        a[j+1]=add;
    }
}
void selection(int a[])
{
    int i, j, smalest, smalest_number;
    for(i=0;i<10-1;i++)
    {
        smalest=a[10-1];
        smalest_number=10-1;
        for(j=i;j<10-1;j++)
            if(a[j]<smalest)
            {
                smalest=a[j];
                smalest_number=j;
            }
        a[smalest_number]=a[i];
        a[i]=smalest;
    }
}