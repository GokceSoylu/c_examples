/* 1 den N e kadar olan sayıların toplammını bulan rekursif fonksiyon */
#include <stdio.h>
#include <stdlib.h>
void f(int*,int);
int main()
{
    int n,sum=0;
    printf("bu program 1 den N'e kadar olan sayıların toplamını bulmaktadır\nN sayısını giriniz lutfen ");
    scanf("%d",&n);
    f(&sum,n);
    printf("toplam = %d",sum);
    return 0;
}
void f(int *p,int a)
{
    int i;
    if(a==0)
        return;
    else
        i=a;
        *p+=i;
        f(p,a-1);
}//bom!