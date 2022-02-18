/*fonksiyonlarda sadece static ve extern bekllek siniflari kullanılabilir. belirtilmediği durumalrda fonksiyonlar için bellek sınıfı externdir.
ve aynı dosyada olamsı kosulu ile baska programlarda da tanınır bildiğin extern işte. static yaparsak tabii tanınmaz*/
#include <stdio.h>
int toplama(int , int);
int carpma(int, int);
int main()
{
    int a,b;
    printf("iki adet sayı giriniz lutfen\nilk sayı: ");
    scanf("%d",&a);
    printf("\nikinci sayı");
    scanf("%d",&b);
    printf("sayıların toplamı: %d\nsayıların carpimi: %d",toplama(a,b),carpma(a,b));
    return 0;
}  