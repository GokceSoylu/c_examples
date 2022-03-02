/* işte geldik işn en eğlenceli kısmına biliyorsun ki dizinin boyutunu bir degisken olarak tanımlıyamıyoruz--> int a=5; int array[a];
ifadesini c kabul etmiyor ancak yapmak istiyoruz nasil yaparız. pointerss--> int *p=(int*) malloc (sizeof(int)*a) simdi oldu 
başta int *p dediğimiz yer bildiiğin pointer tanımı. malloc istediğimiz degiskenle boyut olusturmayi sağlayan arkadaşimiz onun başina 
int yazdik cünkü malloc void döndürür dizimizin türünün n eolmasini istiyorsak başına yazaris (char*) || (float*) vb --> hı işn mantiğı
son kısımda sizeof(int) demek bir int için ne kadar yer ayırıyorsan iste o kadarlik alan demek sonra bunu istediiğimiz sayıyla yada değişkenle
çarpiyoruz. Mesela bir int için 2byte ayirsin bizde diyoruz ki bnm dizi için 2byte*a kadarlik yer ayır sana zahmet ve oldu dinamik dizi;))*/
#include <stdio.h>
#include <stdlib.h>//malloc için eklemeliyiz
int main()
{
    int a,i;
    printf("hadi dostum dinamik dizi ogrenmemiz serefine bir dizi yazalim\nonce dizinin boyutunu alalım: ");
    scanf("%d",&a);
    int *p=(int*)malloc(sizeof(int)*a);
    for(i=0;i<a;i++)
    {
        printf("\n%d.eleman: ",i+1);
        scanf("%d",&p[i]);
    }
    printf("\ndizimiz\n");
    for(i=0;i<a;i++)
        printf(" %d ",p[i]);
    printf("\n o da ne agliyor musun. yok yok gözümüze toz kacti ;))");
    return 0;
}