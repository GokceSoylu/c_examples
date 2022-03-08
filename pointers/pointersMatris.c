/* pointersa matris atama pointers ile matris olusturma */
#include <stdio.h>
int main()
{
    int a[5][10][10];//öncelikle bununla başlayalım -> a her elemanı iki boyutlu dizi olan beş elemanlı bir dizidir
    int b[10][10];//her elemanı bir boyutlu dizi olna on elemanlı bir dizi
    int c[10];
    int d;
    printf("\nsize of a = %lu\n",sizeof(a));//5*10*10*int = 500*4 = 2000
    printf("\nsize of a[0] = %lu",sizeof(a[0]));//a sıfır iki boyutlu dizi olan tek bir eleman -> 10*10*int=400
    printf("\nsize of a[0][0] = %lu\n",sizeof(a[0][0]));//on elemanlı bir dizi so 10*int = 40 beynin yandı dimi :)
    printf("\nsize of a[0][0][0] = %lu\n",sizeof(a[0][0][0]));//tek bir int deger = 4
    
    return 0;//beynini daha çok yakalım > pointerMattris2.c 
}