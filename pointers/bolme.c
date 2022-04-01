/* bolme işlemini gerceklestiren fonksiyonu int b(int, int, int*) prototipine uygun olacak sekşlde yazınız */
#include <stdio.h>
int b(int, int, int*);
int main()
{
    int bolum, bolen, bolunen, kalan;//yahu kalana ne gerek var printf'in içine fonksiyonu yaz. Assagı bakalım
    printf("bolunen = ");
    scanf("%d",&bolunen);
    printf("bolen = ");
    scanf("%d",&bolen);
    kalan=b(bolunen, bolen, &bolum);//burada kalana degerini atamak için fonksiyonu yazmadığımızı kabul edelim
    printf("%d / %d = %d kalan = %d",bolunen, bolen, bolum, kalan);//ve fonksiyonu ilk kez burada çaliştirdik. tatlım bolumu yazdırıp sonra fonksiyonu çaliştırmıs oluruz. bolumu degistiremedik sıfır olu :)
    return 0;//iste bu yuzden hazır yukarıda caliştırmısken kalana atıyalım printf'de tekarar çaliştirmayalım dedik :)
}
int b(int bolunen, int bolen, int * bolum)
{
    *bolum=bolunen/bolen;
    return (bolunen%bolen);
}
