/* geldik en sevdiğim bellek sınıfına "static". static için bu kelime ozellikle kulllanılarak tanımlama yapılmalı, yani oyle global zaten externdir aman efendim fonk içinde tanımlanan zaten autodur, static te yazmıyayım olmaaz:))
ilk deger ataması yapılmamışsa =0 olur. static snıfı için bellekte ayırılan yer program çaliştiği surece korunur bu yuzden bi fonksiyon içinde kulla
nıldugunda fonksiyon dursa dahi deger saklanır. --staticler olmez-- ;))*/
#include <stdio.h>//hadi fonksiyonumuzun kaç kez çaliştigiini ogerenelim 
#include <string.h>
int kare (int);
int main()
{
    int x,m;
    char cvp[2];
    do
    {
        printf("\nkaresinin ogrenmak istediginz sayi: ");
        scanf("%d",&x);
        printf("\nsonuc: %d",kare(x));
        printf("\ndevam etmek için -1 giriniz\n");
        scanf("%d",&m);
    } while (m==-1);
    
    return 0;
}
int kare(int a)
{
    static int sayac=0;//işte kral burada :))
    sayac++;
    printf("\nfonsiyon %d kez calişti",sayac);
    return a*a;
}