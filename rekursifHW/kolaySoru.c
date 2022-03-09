/*rakamlarının faktoriyelleri toplamı kendisini veren sayı 145=1!+4!+5! kolay soru;) */
#include <stdio.h>
int faktoriyel(int);
int main()
{
    int n,a,integer,sum=0;
    printf("kontrol etmek istediginiz sayıyı giriniz lutfen");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        integer=a%10;
        sum+=faktoriyel(integer);
        a=a/10;
    }
    if(sum==n)
        printf("iste bu sayınızın rakamlarınıın faktoriyelleri toplamı sayınıza esit");
    else
        printf("maşesef sayınızın rakamlarınınn faktoriyelleri toplamı sayınıza est degildir");
    return 0;
}
int faktoriyel (int x)
{
    if(x==0)
        return 1;
    else
        return x*faktoriyel(x-1);
}