/* asal sayı kontrol eden rekürsif fonksiyon */
#include <stdio.h>

int asal(int, int);
int main()
{
    int n,kontrol;
    printf("asal olup olmadıgını kontrol etemk istediginiz sayıyı giriniz lıutfen");
    scanf("%d",&n);
    kontrol=asal(n, n/2);
    if(kontrol==0)
        printf("sayı asal degildir");
    else
        printf("sayı asaldır");
    return 0;
}
int asal(int x, int y)
{
    if(y<2)
        return 1;
    if(x%2==0)
        return 0;
    return asal(x, y-1);
}