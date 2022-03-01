#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("bir adet sayi giriniz lutfen\n");
    scanf("%d",&n);
    printf("sayını basamakları toplamı: %d",sum(n));
    return 0;
}
int sum( int x)
{
    if(x==0)
        return x;
    else
        return x%10+sum(x/10);
}