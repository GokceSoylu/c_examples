/* int *b (int[], int, int[], int) prototipinde iki diziyi birlestirien fonksiyonu yazddiriniz */
#include <stdio.h>
#include <stdlib.h>
int* birlestir(int[], int, int[], int);//burada ciddi bir hata yaptik fonksiyonun adı ve main deki dizinin adı aynıydı
int main()
{
    int a[]={1,2,3,4,5,6}, b[]={7,8,9,0},*c, i;
    c=birlestir(a,6,b,4);//hal boyle olunbca burada fonksıyon olaraka degil dizi olarak tanıdı ve eror verdi. Dikkatli olalim :)
    for(i=0;i<10;i++)
        printf("%d ",*(c+i));
    return 0;
}
int* birlestir(int m[], int x, int n[], int y)
{
    int i, *p;
    p=(int*)malloc((x+y)*sizeof(int));
    for(i=0;i<x;i++)
        p[i]=*(m+i);
    for(i=0;i<y;i++)
        p[x+i]=*(n+i);
    return p;
}
