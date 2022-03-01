#include <stdio.h>
int main()
{
    int *p;
    int n=20;
    p=&n;
    printf("\n*p: %d\n",*p);
    printf("\n&p: %d\n",&p);
    printf("\nn: %d\n",n);
    printf("\n&n: %d",&n);//bak n in adresi ve direk p dediğimizde ayni sey yazdiriliyor :O
    printf("\np: %d\n",p);
    return 0;
}/*özetle &=adres, *=gösterici anlamına gelir. normalde biz türünü verip değişken tanımlarken su an degisken adresi tutu tanımlıyoruz.
 bunda da * kullanırsak adres gösterme özelliğini kullanırken & kullanırsak kendi bulunduğu adresi yazdiririz, ancak direk p diyip normal degisken
 gibi yazdırısakta oda beklentimizi karsilayip normal bşr degisken gibi içinde tuttugu degeri yazdirir neydi bu deger baska bir degiskenin aderesi
 yandi mi beyin:) birde tryForPointers2.c ye bak:))  */