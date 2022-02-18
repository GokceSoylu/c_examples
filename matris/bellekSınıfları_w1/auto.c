/* normal main fonksiyonun içine yazdığımız int b; ifadesi ve auto int b; ifadesi aynıdır, c de auto default bellek sınıfıdır.
auto degiskenimizin tanımlı oldugu aralıga girdiiginde onun için bellekte otamatik yer ayırır outo sozcugu buradan gelir:)
tanımlı ooldugu aralıktan cıkınca ise degiskenimiz tanımsız olur. ek bilgi global ve parametre degiskenleri auto ozellıgı alamaz extern.c de bu durum acıklanıyor:)*/
#include <stdio.h>
#include <stdlib.h>
int fonk (int);
int main()
{
    int x;
    while(1)
    {
        printf("\ntoplamak istediginiz sayıları giriniz lutfen(bitirmek icin -1 giriniz)");
        scanf("%d",&x);
        if(x==-1)
            break;
        fonk(x);
    }
    printf("\n%d",fonk(0));
    return 0;
}
int fonk(int number)
{
    /*static*/int sum=0;//ooo 0 yazdı. evet çalişmaz çünkü burada sum degerini auto olarak tanımladık bu yuzden fonksiyon bittiginde sum yok olur. fonksiyonu her çalitirdigimizda 0 olur.
    sum+=number;//çözüm: tanımlarken static int sum dersek sum ın son degerini saklar:) just try  it ;))
    return sum;

}